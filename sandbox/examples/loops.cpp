// while loop
int count = 0;
while (count <= 10) {
  std::cout << count;
  count++;
}

// do-while loop
int price = 300;
do {
  std::cout << "Too expensive!";
} while (price > 500);

// for loop
for (int i = 0; i <= 10; i++) {
  std::cout << i;
}

// for-each loop
int fibonacci[5] = { 0, 1, 1, 2, 3 };
for (auto number:fibonacci){
  std::cout << number;
}
