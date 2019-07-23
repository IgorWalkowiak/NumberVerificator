#ifndef NEURONNETWORK_H
#define NEURONNETWORK_H
#include "Layers/firstlayer.h"
#include "Layers/layeri.h"
#include "Layers/outputlayer.h"
#include "hiddennetwork.h"
#include "inputdatadeliver.h"

class NeuronNetwork {
  InputDataDeliver inputDataDeliver;
  FirstLayer firstLayer;
  HiddenNetwork hiddenNetwork;
  OutputLayer outputLayer;

public:
  NeuronNetwork(std::string csvFilePath, int numberOfHiddenLayers,
                int numberOfOutputs, int nodesInHiddenLayers);
  void loadAndParseCsvDataFromFile();
  void startLearn();
};

#endif // NEURONNETWORK_H
