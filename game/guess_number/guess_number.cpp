#include <iostream>
#include <clocale>
#include <cstdlib> // для функции rand() и srand()
#include <ctime>   // для функции time()
#include <limits>  // для std::numeric_limits

void playGuessNumber()
{
  std::cout << "Добро пожаловать в игру 'Угадай число'!" << std::endl;
  std::cout << "Я загадаю число от 1 до 100, а ты попробуешь его угадать." << std::endl;

  // Инициализация генератора случайных чисел
  std::srand(static_cast<unsigned>(std::time(0)));
  int secretNumber = std::rand() % 100 + 1; // Генерация числа от 1 до 100
  int guess = 0;
  int attempts = 0;

  while (guess != secretNumber)
  {
    std::cout << "Введите ваше предположение: ";
    std::cin >> guess;
    attempts++;

    if (std::cin.fail())
    {
      // Проверка на некорректный ввод
      std::cin.clear();                                                   // Очистка флага ошибки
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка остатка ввода
      std::cout << "Пожалуйста, введите целое число." << std::endl;
    }
    else if (guess < secretNumber)
    {
      std::cout << "Слишком мало! Попробуйте еще раз." << std::endl;
    }
    else if (guess > secretNumber)
    {
      std::cout << "Слишком много! Попробуйте еще раз." << std::endl;
    }
    else
    {
      std::cout << "Поздравляем! Вы угадали число " << secretNumber << " за " << attempts << " попыток." << std::endl;
    }
  }
}

int main()
{
  // Установите русскую локаль
  std::setlocale(LC_ALL, "ru_RU.UTF-8");
  // std::setlocale(LC_CTYPE, "Russian_Russia.1251");
  playGuessNumber();
  return 0;
}
