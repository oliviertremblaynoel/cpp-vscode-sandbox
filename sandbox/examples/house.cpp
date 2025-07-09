#include <iostream>

using namespace std;

class House {
private:
  std::string location;
  int rooms;

public:
  // Constructor with default parameters
  House(std::string loc = "New York", int num = 5) {
    location = loc;
    rooms = num;
  }

  // Destructor
  ~House() {
    std::cout << "Moved away from " << location << "\n";
  }
};

int main()
{
  House default_house;	// Calls House("New York", 5)
  House texas_house("Texas");	// Calls House("Texas", 5)
  House big_florida_house("Florida", 10);	// Calls House("Florida", 10)

  return 0;
}
