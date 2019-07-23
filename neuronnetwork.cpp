#include "neuronnetwork.h"
#include <iostream>

NeuronNetwork::NeuronNetwork(std::string csvFilePath, int numberOfHiddenLayers,
                             int numberOfOutputs, int nodesInHiddenLayers)
    : inputDataDeliver(csvFilePath), firstLayer(nodesInHiddenLayers),
      hiddenNetwork(&firstLayer, numberOfHiddenLayers,
                    [](float input) { return input; }),
      outputLayer(numberOfOutputs, hiddenNetwork.getLastLayer(),
                  [](float input) { return input; }) {}

void NeuronNetwork::loadAndParseCsvDataFromFile() {
  inputDataDeliver.parseCsvData();
}

void NeuronNetwork::startLearn() {
  for (int numberOfSample = 0;
       numberOfSample <= inputDataDeliver.parsedCsvData.size();
       numberOfSample++) {
    inputDataDeliver.changeInputData(numberOfSample);
    firstLayer.loadInputs(&inputDataDeliver.inputData.colors);
    hiddenNetwork.processHiddenLayers();
    outputLayer.processInputs();
    if (numberOfSample == 5)
      break;
  }
}
