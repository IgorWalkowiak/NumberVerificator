#ifndef IMAGESPARSER_H
#define IMAGESPARSER_H
#include <memory>
#include <string>
#include <vector>

struct DataStruct;
class ImagesParser {

public:
  ImagesParser();
  void getDataFromImage(std::string imagePath, std::vector<float> &data);
};

#endif // IMAGESPARSER_H
