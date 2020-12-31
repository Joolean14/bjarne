// 7 Do exercise 6, but with three string values. So, if the user enters the
// values Steinbeck, Hemingway, Fitzgerald, the output should be Fitzgerald,
// Hemingway, Steinbeck.

#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> names;
  std::string name1 = "";
  std::cout << "Ingrese un nombre\n";
  std::cin >> name1;
  names.push_back(name1);
  for (int x : names) {
    std::cout << x << " ";
  }
  return 0;
}

// Create a vector
// Implement sort()
// https://www.includehelp.com/cpp-programs/sort-names-in-an-alphabetical-order.aspx
// Como imprimo el vector?
 
