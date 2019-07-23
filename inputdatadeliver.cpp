#include "inputdatadeliver.h"
#include <iostream>
#include <cstdio>



InputDataDeliver::InputDataDeliver(string csvFileDir)
:csvParser(csvFileDir)
{
    this->inputData.colors.resize(784); //looking for smart way to keep it flexible
    std::cout<<"INPUT DATA:"<<this->inputData.colors.size();
}

void InputDataDeliver::parseCsvData()
{
    std::cout<<"Parsing Csv Data..."<<std::endl;
    csvParser.parseFile(parsedCsvData);
    std::cout<<"Csv Data Parsed"<<std::endl;
}

void InputDataDeliver::changeInputData(int index)
{
    std::cout<<"___Number: "<<(int)parsedCsvData.at(index).first<<", Path: "<<parsedCsvData.at(index).second<<std::endl;

    imagesParser.getDataFromImage(parsedCsvData.at(index).second, this->inputData.colors);
    //std::cout<<"TEST: "<<this->inputData.colors.size();
    this->inputData.valueOnPicture = parsedCsvData.at(index).first;
}
