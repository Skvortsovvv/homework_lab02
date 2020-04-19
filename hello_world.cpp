#include <iostream>
#include <string>
int main() {
  std::string username;
  std::cout << "Enter username: ";
  std::cin >> username;  // комментарий от пользователя
  std::cout << "Hello world from " << username << std::endl;
}
