#include "layeri.h"




LayerI::LayerI(int outputSize, std::unique_ptr<LayerI> previousLayer, std::function<float (float)> activFunction)
    : mPreviousLayer(std::move(previousLayer)), mActivFunction(activFunction)
{
    mOutputData=std::make_shared<std::vector<float>>(outputSize);
    mInputData=mPreviousLayer->getOutputs();
}



LayerI::LayerI(int sizeOfInput) //first layer
{
    mOutputData=std::make_shared<std::vector<float>>(sizeOfInput);
    mInputData =std::make_shared<std::vector<float>>(sizeOfInput);
    std::unique_ptr<LayerI> mPreviousLayer = nullptr;


    mActivFunction = [](float input) { return input;};
}

std::shared_ptr<std::vector<float> > LayerI::getOutputs()
{
    return mOutputData;
}
