// 4. Write a program to play a numbers guessing game. The user thinks of a
// number between 1 and 100 and your program asks questions to figure out what
// the number is (e.g., “Is the number you are thinking of less than 50?”). Your
// program should be able to identify the number after asking no more than seven
// questions. Hint: Use the < and <= operators and the if-else construct.

#include <iostream>

int main() {
  bool clues = true;
  int numGuess = 0;

  std::cout << "Piensa en un número del 1 al 100\n";
  std::cout << "¿Es mayor o menor que 50?\n";
  std::cin >> clues;

  if (clues == true) {
    std::cout << "¿Es mayor que 25?\n";
    if (clues == true) {
    statements
    }
  } else {
    std::cout << "¿Es mayor que 75?\n";
  }

  return 0;
}

// Es mayor que 50?
//  Es mayor 75 menor que 75?
//      Es mayor que 87
//  Es mayor o menor que 25?
//
// Es par o impar?
// Ir eliminando de un vector?
//
// Prime numbers?
//