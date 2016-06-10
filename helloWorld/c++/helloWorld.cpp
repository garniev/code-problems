#include <iostream>

using namespace std;

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
