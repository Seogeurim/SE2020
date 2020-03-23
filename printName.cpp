#include <iostream>

void printIntroduce(int input)
{
  if (input == 2)
  {
    std::cout << "My name is Seogeurim." << std::endl;
    std::cout << "I'm student of Hanyang University, ERICA." << std::endl;
    std::cout << "Nice to meet you." << std::endl;
  }
}

int main()
{
  int input;
  std::cin >> input;

  if (input == 1)
  {
    std::cout << "Seogeurim" << std::endl;
  }
  printIntroduce(input);

  return 0;
}