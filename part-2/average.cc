// Khalid Aldelaimi
// khalida@csu.fullerton.edu
// @khalidaldelaimi
// Partners: @Tati-23

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double total{0};
  int count{0};

  for (int line = 1; line < arguments.size(); ++line) {
    double value = std::stod(arguments[line]);
    total += value;
    count++;
  }
  double avg = total / count;
  std::cout << "average = " << avg << "\n";
  return 0;
}