#ifndef NEURONNETWORK_H
#define NEURONNETWORK_H
#include "inputdatadeliver.h"
#include "networklayer.h"


class NeuronNetwork
{
    InputDataDeliver inputDataDeliver;
    //NetworkLayer inputLayer;
public:
    NeuronNetwork(std::string csvFilePath);

};

#endif // NEURONNETWORK_H
