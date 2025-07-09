#include <iostream>

double totalPrice(int items, double price = 9.99) {
  return items * price;
}

// Pass by reference
void addOne(int &i) {
  i += 1;
}

int main() {
  std::cout << totalPrice(10) << "\n";	// Output: 99.9

  int num = 2;
  addOne(num);
  std::cout << num;	// Output: 3

  return 0;
}
