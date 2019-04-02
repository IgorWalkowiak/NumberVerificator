#include "imagesparser.h"
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>

//TODO: change this:
const std::string systemPath= "/home/igor/Projects/build-NumberVeryficator-Desktop-Release/Images/train/";


ImagesParser::ImagesParser()
{

}


std::shared_ptr<std::vector<float>> ImagesParser::getDataFromImage(std::string imagePath)
{
    std::vector<float> data;
    sf::Image image;
    if (!image.loadFromFile(  systemPath+ imagePath)) std::cout<<"ERROR with image Loading";

    sf::Vector2u sizeVec = image.getSize();
    const uint8_t* pixelPtr = image.getPixelsPtr();

    for(int i =0;sizeVec.x*sizeVec.y>i;i++)
    {
        data.push_back(float(pixelPtr[i*4])/255.0);//multiply 4 because I want just black/white color
    }

    return std::make_shared<std::vector<float>>(data);

}
