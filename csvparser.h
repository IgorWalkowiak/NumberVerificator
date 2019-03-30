#ifndef CSVPARSER_H
#define CSVPARSER_H


#include <fstream>
#include <string>
#include <vector>

struct CoordinData{

};

class CsvParser
{
    std::string     source;
    std::ifstream   file;
    std::vector<std::string> result;
public:
    CsvParser(std::string);
    void parseFile(std::vector<std::pair<uint8_t,std::string>>&);
};

#endif // CSVPARSER_H
