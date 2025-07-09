#include <iostream>
#include <unordered_map>
#include <map>

int main() {
  std::unordered_map<std::string, int> country_codes;

  country_codes.insert({"Thailand", 65});
  country_codes.insert({"Peru", 51});
  country_codes["Japan"] = 81;		// Add a new element
  country_codes["Thailand"] = 66; // Access an element

  country_codes.erase("Peru");

  // Outputs: There isn't a code for Belgium
  if (country_codes.count("Belgium")) {
    std::cout << "There is a code for Belgium\n";
  }
  else {
   std::cout << "There isn't a code for Belgium\n";
  }

  // Outputs: 81
  std::cout << country_codes["Japan"] << "\n";

  // Outputs: 2
  std::cout << country_codes.size() << "\n";

  // Outputs: Japan 81
  //          Thailand 66
  for(auto it: country_codes){
    std::cout << it.first << " " << it.second << "\n";
  }

  return 0;
}
