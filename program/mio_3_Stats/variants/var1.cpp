// Программа Game Stats 2.0 
// Демонстрирует арифметические операции с переменными
#include <iostream>
using namespace std; 

int main()
{
  unsigned int score = 5000;
  cout << "score: " << score << endl;
  // изменение значения переменной
  score = score + 100;
  cout << "score: " << score << endl;
  // комбинированный оператор присваивания
  score += 100;
  cout << "score: " << score << endl;
  // операторы инкремента 
  int lives = 3;
  ++lives;
  cout << "lives : " << lives << endl;
  lives = 3;
  lives++;
  cout << "lives: " << lives << endl;
  l i ves = 3;
  int bonus = ++lives * 10;
  cout << "lives. bonus " << lives << " " << bonus << endl;
  l i ves = 3;
  bonus = lives++ * 10;
  cout << "l i ves. bonus = " << lives << " " << bonus << endl;
  // целочисленное переполнение
  score = 4294967295;
  cout << "\nscore: " << score << endl;
  ++score;
  cout << "score: " << score << endl
  return О:
}
