/*
3. Алгоритмы

    Заголовочный файл: <algorithm>
    Функции:
        std::sort, std::reverse, std::find, std::copy, std::accumulate.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{
  std::vector<int> numbers = {5, 3, 9, 1, 7};

  // Сортировка
  std::sort(numbers.begin(), numbers.end());
  for (int num : numbers)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Поиск
  auto it = std::find(numbers.begin(), numbers.end(), 3);
  if (it != numbers.end())
  {
    std::cout << "Число 3 найдено на позиции: " << std::distance(numbers.begin(), it) << std::endl;
  }

  // Аккумуляция
  int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
  std::cout << "Сумма чисел: " << sum << std::endl;

  return 0;
}

