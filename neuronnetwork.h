#ifndef NEURONNETWORK_H
#define NEURONNETWORK_H
#include "inputdatadeliver.h"
#include "Layers/firstlayer.h"
#include "hiddennetwork.h"
#include "Layers/outputlayer.h"
#include "Layers/layeri.h"



class NeuronNetwork
{
    InputDataDeliver inputDataDeliver;
    FirstLayer firstLayer;
    HiddenNetwork hiddenNetwork;
    OutputLayer outputLayer;

public:
    NeuronNetwork(std::string csvFilePath, int numberOfHiddenLayers, int numberOfOutputs, int nodesInHiddenLayers);
    void loadAndParseInputsFromFile();

};

#endif // NEURONNETWORK_H
