#include "city.hpp"

class City {

  std::string name;
  int population;

public:
  City(std::string new_name, int new_pop);
  void add_resident() {
    population++;
  }

private:
  bool is_capital;

};
