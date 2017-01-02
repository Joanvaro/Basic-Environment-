#include <cstdint>
#include <iostream>

class Buffer {
  public:
    Buffer(std::size_t size);
    std::uint8_t* getData();
    void fillData();

  private:
    std::uint8_t* data;
    std::size_t rawSize;

};
