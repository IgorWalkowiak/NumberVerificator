#ifndef INPUTDATADELIVER_H
#define INPUTDATADELIVER_H
#include "csvparser.h"
#include <memory>
#include "imagesparser.h"
using namespace std;

struct InputDataStruct{

    shared_ptr<vector<float>> colors;
    uint8_t valueOnPicture;

    InputDataStruct(shared_ptr<vector<float>> colors,uint8_t value)
    {
        this->colors=colors;
        this->valueOnPicture=value;
    }
};


class InputDataDeliver
{
    vector<pair<uint8_t,string>> parsedCsvData;
    vector<InputDataStruct> inputData;

    CsvParser csvParser;
    ImagesParser imagesParser;

public:
    InputDataDeliver(string csvFileDir);
    void parseInputData();
};

#endif // INPUTDATADELIVER_H
