#include "inputdatadeliver.h"
#include <iostream>
#include <cstdio>



InputDataDeliver::InputDataDeliver(string csvFileDir)
:csvParser(csvFileDir)
{

}

void InputDataDeliver::parseInputData()
{
    printf("Data Parser constructor :: DEBUG");
    csvParser.parseFile(parsedCsvData);
    for(auto csvData : parsedCsvData)
    {
        printf("Number: %u, Path: %s \n",csvData.first,csvData.second.c_str());
        inputData.push_back(InputDataStruct(imagesParser.getDataFromImage(csvData.second),csvData.first));
    }

    for(auto input:inputData)
    {
        int x=0;
        printf("NUMBER: %u \n",input.valueOnPicture);
        for(auto color : *input.colors)
        {
            x++;
          printf("%0.2f ",color);
          if(x%28 == 0) std::cout<<std::endl;
        }
            std::cout<<std::endl;
     }


}
