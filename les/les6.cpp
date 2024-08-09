/*
6. Работа с датой и временем

    Заголовочный файл: <chrono>
    Классы и функции:
        std::chrono::system_clock, std::chrono::steady_clock
        std::chrono::duration
*/
#include <iostream>
#include <chrono>
#include <thread>

int main()
{
  // Засекаем время
  auto start = std::chrono::high_resolution_clock::now();

  // Имитация длительной операции
  std::this_thread::sleep_for(std::chrono::seconds(2));

  auto end = std::chrono::high_resolution_clock::now();
  std::chrono::duration<double> elapsed = end - start;

  std::cout << "Операция заняла: " << elapsed.count() << " секунд." << std::endl;

  return 0;
}
