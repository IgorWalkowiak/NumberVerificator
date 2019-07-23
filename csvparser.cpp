#include "csvparser.h"
#include <iostream>
#include <sstream>
#include <string>

CsvParser::CsvParser(std::string csvFile) : source(csvFile) {
  try {
    file.open(csvFile);
  } catch (...) {
    std::cout << "FILE CAN NOT BE OPEN";
  }
}

void CsvParser::parseFile(
    std::vector<std::pair<uint8_t, std::string>> &parsedData) {
  std::string line;
  std::string cell;
  std::getline(file, line);
  while (std::getline(file, line)) // parsing whole file
  {
    std::stringstream lineStream(line);
    std::getline(lineStream, cell, ','); // parsing one line
    auto second = cell;
    std::getline(lineStream, cell, ',');
    uint8_t first = std::atoi(cell.c_str());
    parsedData.push_back(std::make_pair(first, second));
  }
  /*for(auto iter : parsedData);
      std::cout<< int(iter.first) <<"    "<< iter.second <<"\n"; DEBUG STUFF*/
}
