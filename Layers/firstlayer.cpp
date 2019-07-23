#include "firstlayer.h"
#include <iostream>

FirstLayer::FirstLayer(int sizeOfInput)
    : LayerI(nullptr, [](float input) { return input; }) {
  mOutputData = std::vector<float>(sizeOfInput);
  std::cout << "FirstLayler constructor :: DEBUG    "
            << " outputs=" << this->getOutputSize() << std::endl;
}

void FirstLayer::processInputs() {}

void FirstLayer::loadInputs(std::vector<float> *inputData) {
  // std::cout<<" mOutputData= "<<mOutputData.size();
  // std::cout<<" inputData= "<<inputData->size();
  // std::cout<<" ________";
  mOutputData = *inputData;
  // std::cout<<" mOutputData= "<<mOutputData.size();
  // std::cout<<" inputData= "<<inputData->size();
}
