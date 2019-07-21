#ifndef HIDDENLAYER_H
#define HIDDENLAYER_H

#include "layeri.h"

class HiddenLayer :public LayerI
{
    std::vector<std::vector<float>> weights;

public:
    HiddenLayer(int outputSize, LayerI* previousLayer, std::function<float(float)> activFunction);
    HiddenLayer(int outputSize, std::function<float(float)> activFunction);
    void setPreviousLayer(LayerI* previousLayer);
    void processInputs();

};

#endif // HIDDENLAYER_H
