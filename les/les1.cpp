/*
1. Ввод и вывод (I/O)

    Заголовочные файлы: <iostream>, <fstream>, <sstream>
    Классы и функции:
        std::cin, std::cout, std::cerr: Потоки для стандартного ввода, вывода и ошибок.
        std::ifstream, std::ofstream: Потоки для файлового ввода и вывода.
        std::stringstream: Поток для работы с строками.
*/

#include <iostream>
#include <fstream>
#include <sstream>

int main()
{
  // Стандартный ввод-вывод
  std::cout << "Введите ваше имя: ";
  std::string name;
  std::cin >> name;
  std::cout << "Привет, " << name << "!" << std::endl;

  // Работа с файлами
  std::ofstream outFile("example.txt");
  outFile << "Пример текста в файле." << std::endl;
  outFile.close();

  std::ifstream inFile("example.txt");
  std::string content;
  inFile >> content;
  std::cout << "Содержимое файла: " << content << std::endl;
  inFile.close();

  // Работа со строками
  std::stringstream ss;
  ss << "123 456";
  int a, b;
  ss >> a >> b;
  std::cout << "Числа из строки: " << a << ", " << b << std::endl;

  return 0;
}
