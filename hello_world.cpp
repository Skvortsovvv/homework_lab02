#include <iostream>
#include <string>
int main() {
  std::string username;
  std::cout << "Enter username: ";
  std::cin >> username;  // comment from user
  std::cout << "Hello world from " << username << std::endl;
}
