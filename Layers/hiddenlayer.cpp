#include "hiddenlayer.h"
#include <iostream>


HiddenLayer::HiddenLayer(int outputSize, LayerI* previousLayer, std::function<float (float)> activFunction)
    :LayerI(previousLayer, activFunction)
{
    mOutputData=std::make_unique<std::vector<float>>(outputSize);
    mInputData=mPreviousLayer->getOutputs();
    weights=std::vector(mInputData->size(),std::vector<float>(mOutputData->size()));
    for(auto vector:weights)
    {
        for(auto weight:vector)
        {
            weight=3.0;
        }
    }
    std::cout<<"HiddenLayer constructor :: DEBUG    inputs="<<this->getPreviousLayerOutputSize()<<" outputs="<<this->getOutputSize()<<std::endl;
}

HiddenLayer::HiddenLayer(int outputSize, std::function<float (float)> activFunction)
    :LayerI(activFunction)
{
    mOutputData=std::make_unique<std::vector<float>>(outputSize);

}

void HiddenLayer::setPreviousLayer(LayerI* previousLayer)
{
    mPreviousLayer=previousLayer;
    mInputData=mPreviousLayer->getOutputs();
    weights=std::vector(mInputData->size(),std::vector<float>(mOutputData->size()));
    for(auto vector:weights)
    {
        for(auto weight:vector)
        {
            weight=3.0;
        }
    }
    std::cout<<"HiddenLayer constructor :: DEBUG    inputs="<<this->getPreviousLayerOutputSize()<<" outputs"<<this->getOutputSize()<<std::endl;
}

void HiddenLayer::processInputs()
{
    for(int outputIndex=0;outputIndex<mOutputData->size();outputIndex++)
    {
        float sume=0.0;
        for(int inputIndex; inputIndex<mInputData->size();inputIndex++)
        {
            sume=sume+ (weights[outputIndex][inputIndex] * mInputData->at(inputIndex));
        }
        //std::cout<<mActivFunction(sume)<<std::endl;
        mOutputData->at(outputIndex)=mActivFunction(sume);
    }
}
