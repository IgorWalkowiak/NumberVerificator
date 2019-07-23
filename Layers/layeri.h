#ifndef LAYERI_H
#define LAYERI_H

#include <functional>
#include <memory>
#include <vector>

class LayerI {
protected:
  std::vector<float> mOutputData;
  LayerI *mPreviousLayer;
  std::function<float(float)> mActivFunction;

public:
  std::vector<float> *mInputData;
  LayerI(LayerI *previousLayer, std::function<float(float)> activFunction);
  LayerI(std::function<float(float)> activFunction);

  std::vector<float> *getOutputs();
  int getOutputSize();
  int getPreviousLayerOutputSize();
  virtual void processInputs() = 0;
};

#endif // LAYERI_H
