// 3. Read a sequence of double values into a vector. Think of each value as the
// distance betweentwo cities along a given route. Compute and print the total
// distance (the sum of all distances). Find and print the smallest and greatest
// distance between two neighboring cities. Find and print the mean distance
// between two neighboring cities.

#include <iostream>
#include <vector>

void printTotalDistanceSum(std::vector<double> distances) {
  double totalDistanceSum;
  double accumulator = 0;

  for (int i = 0; i <= distances.size() - 1; i++) {
    totalDistanceSum = distances[i] + distances[i + 1];
    accumulator = totalDistanceSum;
  }
    std::cout << accumulator << "\n";
}

void printAllDistancesToCout(std::vector<double> distances) {
  for (int i = 0; i < distances.size(); i++)
    std::cout << distances[i] << "\n";
}

int main() {
  double distance;
  int numOfCities = 0;
  std::vector<double> distances;

  std::cout << "Ingrese el numero de ciudades a analizar\n";
  std::cin >> numOfCities;

  for (int i = 1; i <= numOfCities; ++i) {
    std::cout << "Ingresa el valor #" << i << "\n";
    std::cin >> distance;
    distances.push_back(distance);
  }

  std::cout << "Distancias ingresadas:\n";
  printAllDistancesToCout(distances);

  std::cout << "Total suma distancias:\n";
  printTotalDistanceSum(distances);

  return 0;
}

// double vector
// Read multiple variables with a loop
x
// function to print sum of all distances
// function to print smallest distance between 2 neighboring cities
// function to print the greatest distance between 2 neighboring cities
// function to print mean distance between 2 neighboring cities