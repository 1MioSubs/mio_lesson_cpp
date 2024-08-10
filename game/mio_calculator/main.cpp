// Каллькулятор на продвинутом уровне
//  Демонстрация работы со встроеными арефметическими операторами

#include <iostream>

int main()
{
  int num1 = 9;
  int num2 = 6;
  int num3 = 3;
  float num21 = 6.7;
  float num31 = 3.2;
  std::cout << "Hello Mio Calculator!" << std::endl;
  std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
  std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
  std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
  std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
  std::cout << num21 << " / " << num31 << " = " << num21 / num31 << std::endl;
  std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
  std::cout << num1 << " + " << num2 << " * " << num3 << " = " << num1 - num2 * num3 << std::endl;
  std::cout << "(" << num1 << " + " << num2 << ") * " << num3 << " = " << (num1 - num2) * num3 << std::endl;
  return 0;
}
