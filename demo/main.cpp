#include <header.hpp>
#include <iostream>


int main() {
  // path  менять в зависимости от системы
  std::string path("/home/morgan/Documents/lab/lab4/misc/ftp/");
  Filesystem test(path);
  std::cout << test;
}