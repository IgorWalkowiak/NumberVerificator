#include "csvparser.h"
#include <string>
#include <iostream>
#include <sstream>

    CsvParser::CsvParser(std::string csvFile)
        :source(csvFile)
    {
        file.open(csvFile);

    }

    void CsvParser::parseFile(std::vector<std::pair<uint8_t,std::string>>& parsedData)
    {
    std::string     line;
    std::string     cell;
    std::getline(file,line);
    while(std::getline(file,line))  //parsing whole file
    {
        std::stringstream   lineStream(line);
        std::getline(lineStream,cell, ','); //parsing one line
        auto second= cell;
        std::getline(lineStream,cell, ',');
        uint8_t first = std::atoi(cell.c_str());
        parsedData.push_back(std::make_pair(first,second));

    }
    for(auto iter = result.begin(); iter!=result.end(); iter=iter+2)
    {
        std::cout<< *iter <<"    "<< *(iter+1) <<"\n";
    }

    }
