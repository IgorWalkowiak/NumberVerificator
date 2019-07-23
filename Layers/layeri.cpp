#include "layeri.h"

LayerI::LayerI(LayerI *previousLayer, std::function<float(float)> activFunction)
    : mPreviousLayer(previousLayer), mActivFunction(activFunction),
      mInputData(previousLayer->getOutputs()) {}

LayerI::LayerI(std::function<float(float)> activFunction)
    : mActivFunction(activFunction) {}

std::vector<float> *LayerI::getOutputs() { return &mOutputData; }

int LayerI::getOutputSize() { return mOutputData.size(); }

int LayerI::getPreviousLayerOutputSize() {
  return mPreviousLayer->getOutputSize();
}
