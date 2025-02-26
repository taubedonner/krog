#pragma once

#include <physfs.h>

#include <memory>
#include <streambuf>
#include <vector>

class PhysStreamBuf : public std::streambuf {
 public:
  explicit PhysStreamBuf(const std::string& filePath);

  ~PhysStreamBuf() override;

  [[nodiscard]] bool is_open() const;

  [[nodiscard]] PHYSFS_File* getFileHandle() const { return file; }

 protected:
  // Implement new data loading method
  int_type underflow() override;

 private:
  void close();

  PHYSFS_File* file;
  std::vector<char> buffer;
  size_t buffer_size;
};

class PhysFileStream : public std::istream {
 public:
  explicit PhysFileStream(const std::string& filePath);

  [[nodiscard]] bool is_open() const;

  [[nodiscard]] PHYSFS_sint64 getFileSize() const {
    if (!streamBuf.is_open()) {
      return -1;
    }
    return PHYSFS_fileLength(streamBuf.getFileHandle());
  }

 private:
  PhysStreamBuf streamBuf;
};
