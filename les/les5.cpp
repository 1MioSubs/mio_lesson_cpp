/*
5. Умные указатели

    Заголовочный файл: <memory>
    Классы:
        std::unique_ptr: Уникальный владение ресурсом.
        std::shared_ptr: Совместное владение ресурсом.
*/
#include <iostream>
#include <memory>

int main()
{
  // Unique Pointer
  std::unique_ptr<int> uniquePtr(new int(5));
  std::cout << "Unique Pointer: " << *uniquePtr << std::endl;

  // Shared Pointer
  std::shared_ptr<int> sharedPtr1(new int(10));
  std::shared_ptr<int> sharedPtr2 = sharedPtr1;
  std::cout << "Shared Pointer: " << *sharedPtr1 << ", use count: " << sharedPtr1.use_count() << std::endl;

  return 0;
}
