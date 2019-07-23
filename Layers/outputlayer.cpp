#include "outputlayer.h"
#include <iostream>

OutputLayer::OutputLayer(int outputSize, LayerI* previousLayer, std::function<float (float)> activFunction)
    :LayerI(previousLayer, activFunction)
{
    mOutputData=std::vector<float>(outputSize);

    weights = std::vector(mInputData->size(),std::vector<float>(mOutputData.size()));
    std::cout<<"weight size= "<<weights.size()<<std::endl;
    std::cout<<"weight size= "<<weights[0].size();
    for(auto &vector:weights)
    {
        for(auto &weight:vector)
            weight=3.0;
    }
    //std::cout<<"OutputLayer constructor :: DEBUG    inputs="<<this->getPreviousLayerOutputSize()<<" outputs="<<this->getOutputSize()<<std::endl;

}

void OutputLayer::setPreviousLayer(LayerI* previousLayer)
{
    mPreviousLayer=previousLayer;
    mInputData=mPreviousLayer->getOutputs();

    weights=std::vector(mInputData->size(),std::vector<float>(mOutputData.size()));
    for(auto vector:weights)
    {
        for(auto weight:vector)
            weight=3.0;
    }

}

void OutputLayer::processInputs()
{

    for(int outputIndex=0;outputIndex<mOutputData.size();outputIndex++)
    {
        float sume=0.0;
        for(int inputIndex=0; inputIndex<mInputData->size();inputIndex++)
        {
            sume=sume +  mInputData->at(inputIndex);

        }
        mOutputData.at(outputIndex)=mActivFunction(sume);
    }


    std::cout<<"LAST LAYER:  ";
    for(auto test : mOutputData)
        std::cout<<test<<" ";

}
