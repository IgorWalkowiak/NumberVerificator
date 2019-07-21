
#include "hiddennetwork.h"


HiddenNetwork::HiddenNetwork(LayerI* firstLayer, int numberOfHiddenLayers, std::function<float(float)> activFunction)
{
    hiddenLayers.push_back(HiddenLayer(784,firstLayer,activFunction));//input
    for(int i =0;i<numberOfHiddenLayers-1;i++)
    {
        hiddenLayers.push_back(HiddenLayer(784,&hiddenLayers[i],activFunction));
    }
}

LayerI *HiddenNetwork::getLastLayer()
{
    return &hiddenLayers[hiddenLayers.size()-1];
}
