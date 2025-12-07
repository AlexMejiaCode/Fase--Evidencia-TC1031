#include <iostream>
#include <ctime>
#include <string>
#include <utility>
#include <algorithm>
#include <vector>
#include <fstream>
#include <sstream>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::pair;

int main() {
  std::ifstream inputFile("equipo5.csv");

  if (!inputFile.is_open()) {
      std::cout << "Error opening the file" << std::endl;
      return 1;
  }

  // TODO: process csv data

  inputFile.close();
  
  return 0;
}
