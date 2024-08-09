#include <iostream>
#include <clocale>
#include <cstdlib> // для функции rand() и srand()
#include <ctime>   // для функции time()
#include <limits>  // для std::numeric_limits

void cleanNum();
void restart();
void playGuessNumber(int game);

void cleanNum()
{
  // Проверка на некорректный ввод
  std::cin.clear();                                                   // Очистка флага ошибки
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очистка остатка ввода
  std::cout << "Пожалуйста, введите целое число." << std::endl;
}

void restart()
{
  int res = 0;
  std::cout << "Сыграем еще раз? 1-да или 0-нет." << std::endl;
  std::cin >> res;

  if (std::cin.fail())
  {
    cleanNum();
    restart();
  }
  else if (res == 0)
  {
    std::cout << "Конец игры выход" << std::endl;
  }
  else if (res == 1)
  {
    playGuessNumber(1);
  }
  else 
  {
    cleanNum();
    restart();
  }
}

void playGuessNumber(int game)
{
  int guess = 0;
  int attempts = 0;
  int exit = 69;
  int gameWhile = 1;
  int numUser = 0;
  int num1 = 0;
  int num2 = 100;
  int secretNumber = 0;

  if (game != 3)
  {
    if (game == 0)
    {
      std::cout << "Добро пожаловать в игру 'Угадай число'!" << std::endl;
    }
    else if (game == 1)
    {
      std::cout << "Ура вы решили остаться!" << std::endl;
      std::cout << "Выберете диапазон или я задам стандартный? 1-ваш или 0-стандартный." << std::endl;
      std::cin >> numUser;
    }
  }
  else
  {
    std::cout << "Не правильный ввод - Введите 1-ваш или 0-стандартный." << std::endl;
    std::cin >> numUser;
  }

  if (std::cin.fail())
  {
    cleanNum();
    playGuessNumber(3);
  }
  else if (numUser == 1)
  {
    int testIn = 1;
    while (testIn == 1)
    {
      std::cout << "Введите первое число: " << std::endl;
      std::cin >> num1;

      if (std::cin.fail())
      {
        cleanNum();
      }
      else
      {
        std::cout << "Введите второе число: " << std::endl;
        std::cin >> num2;
        if (std::cin.fail())
        {
          cleanNum();
        }
        else
        {
          std::srand(static_cast<unsigned>(std::time(0)));
          secretNumber = std::rand() % (num2 - num1 + 1) + num1; // Генерация числа от 1 до 100
          testIn = 0;
        }
      }
    }
  }
  else if (numUser == 0)
  {
    std::cout << "Я загадаю число от 1 до 100, а ты попробуешь его угадать." << std::endl;

    // Инициализация генератора случайных чисел
    std::srand(static_cast<unsigned>(std::time(0)));
    secretNumber = std::rand() % 100 + 1; // Генерация числа от 1 до 100
  }
  else
  {
    cleanNum();
    playGuessNumber(3);
  }

  while (gameWhile == 1)
  {
    std::cout << "Введите ваше предположение." << std::endl;
    std::cin >> guess;
    attempts++;

    if (std::cin.fail())
    {
      // Проверка на некорректный ввод
      cleanNum();
    }
    else if (guess == 999666)
    {
      std::cout << "Конец игры выход" << std::endl;
      gameWhile = 0;
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
      gameWhile = 0;
      restart();
    }
  }
}

int main()
{
  // Установите русскую локаль
  std::setlocale(LC_ALL, "ru_RU.UTF-8");
  // std::setlocale(LC_CTYPE, "Russian_Russia.1251");
  playGuessNumber(1);
  return 0;
}
