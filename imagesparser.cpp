#include "imagesparser.h"
#include <string>
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <memory>
#include "imagesparser.h"

//TODO: change this:
const std::string systemPath= "/home/igor/Projects/Images/train/";


ImagesParser::ImagesParser()
{
}


void ImagesParser::getDataFromImage(std::string imagePath, std::vector<float>& data)
{
    sf::Image image;
    if (!image.loadFromFile(systemPath+imagePath)) std::cout<<"ERROR with image Loading";

    const uint8_t* pixelPtr = image.getPixelsPtr();

    for(int i =0;data.size()>i;i++)
        data.at(i)=(float(pixelPtr[i*4])/255.0);//multiply 4 because I want just black/white color
    //std::cout<<"ImageParser: "<<data.size();

}
