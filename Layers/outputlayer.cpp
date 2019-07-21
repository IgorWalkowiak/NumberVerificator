#include "outputlayer.h"
#include <iostream>

OutputLayer::OutputLayer(int outputSize, LayerI* previousLayer, std::function<float (float)> activFunction)
    :LayerI(previousLayer, activFunction)
{
    mOutputData=std::make_unique<std::vector<float>>(outputSize);
    std::cout<<"OutputLayer constructor :: DEBUG    inputs="<<this->getPreviousLayerOutputSize()<<" outputs="<<this->getOutputSize()<<std::endl;

}

void OutputLayer::processInputs()
{

}
