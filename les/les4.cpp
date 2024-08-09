/*
4. Строки

    Заголовочный файл: <string>
    Классы и функции:
        std::string: Работа со строками.
        Методы: length(), substr(), find(), append().
*/
#include <iostream>
#include <string>

int main()
{
  std::string text = "Hello, World!";
  std::cout << "Длина строки: " << text.length() << std::endl;
  std::cout << "Подстрока: " << text.substr(7, 5) << std::endl;

  size_t pos = text.find("World");
  if (pos != std::string::npos)
  {
    std::cout << "'World' найдено на позиции: " << pos << std::endl;
  }

  text.append(" C++ is fun!");
  std::cout << text << std::endl;

  return 0;
}
