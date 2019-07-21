#include "layeri.h"




LayerI::LayerI(LayerI* previousLayer, std::function<float (float)> activFunction)
    : mPreviousLayer(previousLayer), mActivFunction(activFunction), mInputData(nullptr)
{

}

LayerI::LayerI(std::function<float (float)> activFunction)
{

}


std::vector<float>* LayerI::getOutputs()
{
    return mOutputData.get();
}

int LayerI::getOutputSize()
{
    return mOutputData.get()->size();
}

int LayerI::getPreviousLayerOutputSize()
{
    return mPreviousLayer->getOutputSize();
}


