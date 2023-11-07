//
// Created by Nikita Zarudniy on 06/29/2023.
//

#pragma once



namespace kr {

    class  Application;

    class  Layer {
    public:
        explicit Layer(std::string  name = "Unnamed Layer");

        virtual ~Layer() = 0;

        void OnAttachApp(Application* application) {
            m_Application = application;
            OnAttach();
        }

        virtual void OnAttach() {};

        virtual void OnDetach() {};

        virtual void OnUpdate() {};

        virtual void OnUiUpdate() {};

        std::string GetName();

        auto GetApplication() { return m_Application; }

    protected:
        std::string m_LayerName;
        Application* m_Application{nullptr};
    };

} // kr
