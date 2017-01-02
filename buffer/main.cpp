#include "buffer.hpp"

//using Buffer;

int main(){
  std::size_t capacity = 10;
  std::uint8_t* data;

  Buffer buffer(capacity);
  buffer.fillData();
  data = buffer.getData();

  std::cout << std::hex << data << std::endl;

  return 0;

}
