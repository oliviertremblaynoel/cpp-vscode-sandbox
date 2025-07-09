#include <iostream>

class Base {
public:
  int base_id;

  Base(int new_base) : base_id(new_base) {}
};

class Derived: public Base {
public:
  int derived_id;

  Derived(int new_base, int new_derived)
    : Base(new_base), derived_id(new_derived) {}

  void show() {
    std::cout << base_id << " " << derived_id;
  }
};

int main() {
  Derived temp(1, 2);

  temp.show(); // Outputs: 1 2

  return 0;
}
