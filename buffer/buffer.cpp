#include "buffer.hpp"

Buffer::Buffer(std::size_t size){
  data = new std::uint8_t [size];
  rawSize = size;
}

void Buffer::fillData(){
  for(std::size_t i = 0; i < rawSize; i++){
    data[i] = rand() % 25 + 65;
  }
}  

std::uint8_t* Buffer::getData(){
  return data; 
}
