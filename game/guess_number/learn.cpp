#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <locale>

class GuessNumberGame
{
public:
  GuessNumberGame()
  {
    std::srand(static_cast<unsigned>(std::time(0)));
    play();
  }

private:
  int secretNumber;
  int num1 = 1;
  int num2 = 100;

  void play()
  {
    while (true)
    {
      setupGame();
      playRound();
      if (!restart())
        break;
    }
  }

  void setupGame()
  {
    int choice;
    std::cout << "Выберите диапазон чисел (1 - пользовательский, 0 - стандартный): ";
    std::cin >> choice;

    if (std::cin.fail() || (choice != 0 && choice != 1))
    {
      clearInput();
      std::cout << "Некорректный ввод. Повторите попытку." << std::endl;
      setupGame();
      return;
    }

    if (choice == 1)
    {
      setCustomRange();
    }
    else
    {
      std::cout << "Я загадаю число от " << num1 << " до " << num2 << "." << std::endl;
    }
    secretNumber = std::rand() % (num2 - num1 + 1) + num1;
  }

  void setCustomRange()
  {
    std::cout << "Введите первый предел диапазона: ";
    std::cin >> num1;
    if (std::cin.fail())
    {
      clearInput();
      setCustomRange();
      return;
    }
    std::cout << "Введите второй предел диапазона: ";
    std::cin >> num2;
    if (std::cin.fail() || num1 >= num2)
    {
      clearInput();
      std::cout << "Некорректный диапазон. Попробуйте снова." << std::endl;
      setCustomRange();
      return;
    }
  }

  void playRound()
  {
    int guess;
    int attempts = 0;
    while (true)
    {
      std::cout << "Введите ваше предположение: ";
      std::cin >> guess;
      attempts++;

      if (std::cin.fail())
      {
        clearInput();
        std::cout << "Пожалуйста, введите целое число." << std::endl;
        continue;
      }

      if (guess == 999666)
      {
        std::cout << "Конец игры. Выход." << std::endl;
        return;
      }

      if (guess < secretNumber)
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
        return;
      }
    }
  }

  bool restart()
  {
    int choice;
    std::cout << "Сыграем еще раз? (1 - да, 0 - нет): ";
    std::cin >> choice;

    if (std::cin.fail() || (choice != 0 && choice != 1))
    {
      clearInput();
      std::cout << "Некорректный ввод. Повторите попытку." << std::endl;
      return restart();
    }

    return choice == 1;
  }

  void clearInput()
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
};

int main()
{
  std::setlocale(LC_ALL, "ru_RU.UTF-8");
  GuessNumberGame game;
  return 0;
}
