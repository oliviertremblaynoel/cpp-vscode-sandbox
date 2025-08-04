#include <iostream>

class Dog {
public:
  int age;

  void sound() {
    std::cout << "woof\n";
  }
};

int main() {
  Dog buddy;

  buddy.age = 5;

  buddy.sound();	// Outputs: woof
}
