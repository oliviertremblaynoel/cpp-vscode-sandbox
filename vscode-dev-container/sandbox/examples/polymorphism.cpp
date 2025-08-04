#include <iostream>

class Employee {
public:
  virtual void salary() {
    std::cout << "Normal salary.\n";
  }
};

class Manager: public Employee {
public:
  void salary() {
    std::cout << "Normal salary and bonus.\n";
  }
};

int main() {
  Employee e;
  Manager m;

  Employee* eptr = &e;
  Employee* eptr2 = &m;
  Manager* mptr = &m;

  std::cout << "eptr->salary(): ";
  eptr->salary();         // Employee::salary() Normal salary.

  std::cout << "eptr2->salary(): ";
  eptr2->salary();        // Manager::salary() – virtual dispatch:  Normal salary and bonus.

  std::cout << "mptr->salary(): ";
  mptr->salary();         // Manager::salary() : Normal salary and bonus.
}
