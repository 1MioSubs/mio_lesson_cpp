/*
2. Контейнеры

    Заголовочные файлы: <vector>, <list>, <map>, <set>, <unordered_map>, <unordered_set>
    Классы и функции:
        std::vector: Динамический массив.
        std::list: Двусвязный список.
        std::map, std::unordered_map: Ассоциативный массив (ключ-значение).
        std::set, std::unordered_set: Множество уникальных элементов.
*/
#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <unordered_map>

int main()
{
  // Vector
  std::vector<int> numbers = {1, 2, 3, 4, 5};
  numbers.push_back(6);
  for (int num : numbers)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // List
  std::list<std::string> words = {"Hello", "World"};
  words.push_front("C++");
  for (const auto &word : words)
  {
    std::cout << word << " ";
  }
  std::cout << std::endl;

  // Map
  std::map<std::string, int> ages;
  ages["Alice"] = 30;
  ages["Bob"] = 25;
  for (const auto &pair : ages)
  {
    std::cout << pair.first << " is " << pair.second << " years old." << std::endl;
  }

  // Unordered Map
  std::unordered_map<char, int> letter_count = {{'a', 1}, {'b', 2}};
  for (const auto &pair : letter_count)
  {
    std::cout << "Letter " << pair.first << " appears " << pair.second << " times." << std::endl;
  }

  // Set
  std::set<int> unique_numbers = {1, 2, 3, 3, 4};
  for (int num : unique_numbers)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
