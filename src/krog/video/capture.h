//
// Created by Nikita Zarudniy on 06/29/2023.
//

#include "krog/export.h"

#include "krog/util/threadwrapper.h"
#include "krog/renderer/image.h"
#include "krog/renderer/formats.h"

#include <eventpp/callbacklist.h>
#include <eventpp/utilities/scopedremover.h>

#include <utility>

namespace kr {

    using StreamListenerCallback = void(const std::string&, const std::shared_ptr<gl::Image2D>&);

    class KROG_API CaptureListener;

    class KROG_API Capture {
    public:
        using Id = std::string;

        using Name = std::string;

        using Address = uint32_t;

        using Ptr = std::shared_ptr<Capture>;

        using CallbackList = eventpp::CallbackList<StreamListenerCallback>;

        Capture() = default;

        virtual ~Capture() = 0;

        virtual auto GetId() -> Id { return m_Id; }

        virtual auto GetName() -> Id { return m_Name; }

        virtual auto GetAddress() -> Address { return m_Address; }

        virtual auto GetWidth() -> size_t { return m_Width; }

        virtual auto GetHeight() -> size_t { return m_Height; }

        virtual auto GetPixelType() -> gl::PixelType { return m_PixelType; }

        virtual auto GetPixelFormat() -> gl::PixelFormat { return m_PixelFormat; }

        virtual bool IsAccessible() = 0;

        virtual bool IsOpened() = 0;

        virtual bool IsGrabbing() = 0;

        virtual bool Open() = 0;

        virtual bool Close() = 0;

        virtual bool StartGrabbing() = 0;

        virtual bool StopGrabbing() = 0;

        void AppendListener(CaptureListener* listener);

    protected:
        // Must be called before stopping grabbing
        void RemoveAllListeners();

        Id m_Id{};
        Name m_Name{};
        int m_Width{};
        int m_Height{};
        Address m_Address{};
        gl::PixelType m_PixelType{gl::PixelType::Count};
        gl::PixelFormat m_PixelFormat{gl::PixelFormat::Count};
        CallbackList m_StreamListeners;
    };

    class KROG_API CaptureListener {
    public:
        virtual ~CaptureListener() = 0;

        virtual void OnNewFrame(const std::string& id, const std::shared_ptr<gl::Image2D>& frame) {};

    private:
        eventpp::ScopedRemover<Capture::CallbackList> m_Remover;
        friend class Capture;
    };

} // kr
