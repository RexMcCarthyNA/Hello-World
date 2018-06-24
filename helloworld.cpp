#include <iostream>

int main()  {
  std::cout << "Hello, World!" << std::endl;
  
  for (int i = 0; i < 10; i++)
  {
    std::cout << i << " : " << i*i << std::endl;
  }
  
  std::cout << "Done!" << std::endl;
  return 0;
}
