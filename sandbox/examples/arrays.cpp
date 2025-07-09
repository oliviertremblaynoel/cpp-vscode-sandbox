#include <iostream>
#include <string>

using namespace std;

int main()
{
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

  std::cout << vowels[2];	// Outputs: i

  char game[3][3] = {
    {'x', 'o', 'o'} ,
    {'o', 'x', 'x'} ,
    {'o', 'o', 'x'}
  };

	std::cout << game[0][2];	// Outputs: o

  // Declare and initialize an array of strings
  string fruits[] = {"Apple", "Banana", "Orange", "Grapes"};

  // Access and print each element of the array
  for (int i = 0; i < 4; i++) {
      cout << "Fruit at index " << i << ": " << fruits[i] << endl;
  }

  return 0;
}
