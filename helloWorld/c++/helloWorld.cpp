#include <iostream>

using namespace std;

/*
  Example of Hello World written in C++
  Author: Jairo García - garniev: https://github.com/garniev
*/

class Greetings{
public:
  void sayHello();
};

void Greetings::sayHello(){
  cout << "Hello, world" << endl;
}

int main(){
  Greetings greetings;
  greetings.sayHello();
}
