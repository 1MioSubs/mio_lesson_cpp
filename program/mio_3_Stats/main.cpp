#include <iostream>

using namespace std;

int main()
{
  int score;
  double distance;
  char platAgain;
  bool shieldsUp;
  short lives, aliensKilled;

  score = 0;
  distance = 1200.76;
  platAgain = 'y';
  shieldsUp = true;
  lives = 3;
  aliensKilled = 10;

  double engineTemp = 6572.89;

  cout << "\nscore: " << score << endl;
  cout << "distance: " << distance << endl;
  cout << "platAgain: " << platAgain << endl;
  cout << "lives: " << lives << endl;
  cout << "aliensKilled: " << aliensKilled << endl;
  cout << "engineTemp: " << engineTemp << endl;

  int fuel;
  cout << "\nHow much fuel?" << endl;
  cin >> fuel;
  cout << "fuel: " << fuel << endl;

  return 0;
}
