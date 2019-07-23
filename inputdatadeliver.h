#ifndef INPUTDATADELIVER_H
#define INPUTDATADELIVER_H
#include "csvparser.h"
#include "imagesparser.h"
#include <memory>
using namespace std;

struct InputDataStruct {
  vector<float> colors;
  uint8_t valueOnPicture;
};

class InputDataDeliver {
  CsvParser csvParser;
  ImagesParser imagesParser;

public:
  InputDataDeliver(string csvFileDir);
  void parseCsvData();
  void changeInputData(int index);

  InputDataStruct inputData;
  vector<pair<uint8_t, string>> parsedCsvData;
};

#endif // INPUTDATADELIVER_H
