#include <iostream>

using namespace std;

/*
  Example of Hello World written in C++
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
