#include "hiddennetwork.h"
#include <iostream>

HiddenNetwork::HiddenNetwork(LayerI *firstLayer, int numberOfHiddenLayers,
                             std::function<float(float)> activFunction) {
  for (int i = 0; i < numberOfHiddenLayers; ++i) {
    hiddenLayers.push_back(HiddenLayer(784, activFunction));
  }

  hiddenLayers[0].setPreviousLayer(firstLayer);
  for (int i = 1; i < numberOfHiddenLayers; ++i) {
    hiddenLayers[i].setPreviousLayer(&hiddenLayers[i - 1]);
  }
}

LayerI *HiddenNetwork::getLastLayer() {
  return &hiddenLayers[hiddenLayers.size() - 1];
}

void HiddenNetwork::processHiddenLayers() {
  for (auto &layer : hiddenLayers)
    layer.processInputs();
}
