#include "hiddenlayer.h"
#include <iostream>


HiddenLayer::HiddenLayer(int outputSize, LayerI* previousLayer, std::function<float (float)> activFunction)
    :LayerI(previousLayer, activFunction)
{
    mOutputData= std::vector<float>(outputSize);
    mInputData= mPreviousLayer->getOutputs();
     std::cout<<"HiddenLayer Constructor inputData address: "<<mInputData<<"Input size: "<<mInputData->size()<<std::endl;
    weights= std::vector(mInputData->size(),std::vector<float>(mOutputData.size()));
    for(auto &vector:weights)
    {
        for(auto &weight:vector)
            weight=3.0;
    }


    //std::cout<<"HiddenLayer constructor :: DEBUG    inputs="<<this->getPreviousLayerOutputSize()<<" outputs="<<this->getOutputSize()<<std::endl;
}

HiddenLayer::HiddenLayer(int outputSize, std::function<float (float)> activFunction)
    :LayerI(activFunction)
{
    mOutputData=std::vector<float>(outputSize);

}

void HiddenLayer::setPreviousLayer(LayerI* previousLayer)
{
    mPreviousLayer=previousLayer;
    mInputData=mPreviousLayer->getOutputs();
    weights=std::vector(mInputData->size(),std::vector<float>(mOutputData.size()));
    for(auto &vector:weights)
    {
        for(auto &weight:vector)
        {
            weight=0.001;
        }
    }
}

void HiddenLayer::processInputs()
{
    for(auto test : *mInputData)
        std::cout<<test<<" ";

    std::cout<<std::endl;


    for(int outputIndex=0;outputIndex<mOutputData.size();outputIndex++)
    {
        float sume=0.0;
        for(int inputIndex=0; inputIndex<mInputData->size();inputIndex++)
        {
            //sume = sume + (weights[outputIndex][inputIndex] * mInputData->at(inputIndex));
            sume=mInputData->at(outputIndex);
        }
        mOutputData.at(outputIndex)=mActivFunction(sume);
    }


    for(auto test : mOutputData)
        std::cout<<test<<" ";

    std::cout<<std::endl;
}
