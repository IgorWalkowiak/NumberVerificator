#include "neuronnetwork.h"
#include <iostream>

NeuronNetwork::NeuronNetwork(std::string csvFilePath, int numberOfHiddenLayers, int numberOfOutputs, int nodesInHiddenLayers)
    :inputDataDeliver(csvFilePath)
    ,firstLayer(nodesInHiddenLayers)
    ,hiddenNetwork(&firstLayer, numberOfHiddenLayers, [](float input) { return input;})
    ,outputLayer(numberOfOutputs, hiddenNetwork.getLastLayer(), [](float input) { return input;})
{

}

void NeuronNetwork::loadAndParseInputsFromFile()
{
    inputDataDeliver.parseInputData();

}
