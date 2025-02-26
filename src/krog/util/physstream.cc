#include "physstream.h"

PhysStreamBuf::PhysStreamBuf(const std::string &filePath) : file(nullptr), buffer_size(4096) {
  file = PHYSFS_openRead(filePath.c_str());
  if (!file) {
    return;
  }

  // Allocate space in buffer and set pointers
  buffer.resize(buffer_size);
  setg(&buffer[0], &buffer[0], &buffer[0]);
}

PhysStreamBuf::~PhysStreamBuf() { close(); }

int PhysStreamBuf::underflow() {
  if (gptr() < egptr()) {
    return traits_type::to_int_type(*gptr());
  }

  // Read chunk via PhysFS API
  PHYSFS_sint64 bytesRead = PHYSFS_readBytes(file, buffer.data(), buffer_size);
  if (bytesRead <= 0) {
    return traits_type::eof();  // EOF or I/O Error
  }

  // Update pointers
  setg(&buffer[0], &buffer[0], &buffer[0] + bytesRead);
  return traits_type::to_int_type(*gptr());
}

bool PhysStreamBuf::is_open() const { return file != nullptr; }

void PhysStreamBuf::close() {
  if (file) {
    PHYSFS_close(file);
    file = nullptr;
  }
}

PhysFileStream::PhysFileStream(const std::string &filePath) : std::istream(&streamBuf), streamBuf(filePath) {
  if (!streamBuf.is_open()) {
    setstate(std::ios::failbit);  // Failed to open file
  }
}

bool PhysFileStream::is_open() const { return streamBuf.is_open(); }
