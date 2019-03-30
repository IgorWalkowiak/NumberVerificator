#ifndef IMAGESPARSER_H
#define IMAGESPARSER_H
#include <string>
#include <vector>
#include <memory>

struct DataStruct;
class ImagesParser
{

public:
    ImagesParser();
    std::shared_ptr<std::vector<uint8_t>>  getDataFromImage(std::string);
};

#endif // IMAGESPARSER_H
