#ifndef INPUTDATADELIVER_H
#define INPUTDATADELIVER_H
#include "csvparser.h"
#include <memory>
#include "imagesparser.h"
using namespace std;

struct DataStruct{
    shared_ptr<vector<uint8_t>> colors;
    uint8_t value;
    DataStruct(shared_ptr<vector<uint8_t>> colors,uint8_t value)
    {
        this->colors=colors;
        this->value=value;
    }
};


class InputDataDeliver
{
    vector<pair<uint8_t,string>> parsedCsvData;
    vector<DataStruct> inputData;

    CsvParser csvParser;
    ImagesParser imagesParser;

public:
    InputDataDeliver(string csvFileDir);
    void parseInputData();
};

#endif // INPUTDATADELIVER_H
