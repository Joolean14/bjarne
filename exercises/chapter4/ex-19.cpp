// 19. Write a program where you first enter a set of name-and-value pairs, such
// as Joe 17 and Barbara 22. For each pair, add the name to a vector called
// names and the number to a vector called scores (in corresponding positions,
// so that if names[7]=="Joe" then scores[7]==17). Terminate input with NoName
// 0. Check that each name is unique and terminate with an error message if a
// name is entered twice. Write out all the (name,score) pairs, one per line.




// E.g input = Joe 17
//
// names[7]=="Joe"
// scores[7]==17
//
// Create two vectors: names, scores.
// Receive a number of input pairs, one for each vector.
//  --> maybe i can get input as a string and then split it to the different vectors
// Terminate input with NoName 0.
// Check that each name is unique.
// Display error message if a name is entered twice.
// Print all name score pairs, one per line.

#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> names = {};
  std::vector<int> scores = {};
  int myInt = 0;
  std::string myName = "";

  std::cout << "Ingrese el nombre y seguido de un espacio el puntaje.\n\t E.g: "
               "Virgelina 12.\n";
  //   std::cin >> names[0];
  //   std::cout << names[0];

  for (int i = 0; i < 10; i++) {
    std::cin >> myInt;
    scores.push_back(myInt);
    std::cin >> myName;
    names.push_back(myName);
  }

  std::cout << "All of them\n";

  for (int i = 0; i < scores.size(); i++) {
    std::cout << scores.at(i) << " " << names.at(i) << '\n';
  }
  
  return 0;
}
