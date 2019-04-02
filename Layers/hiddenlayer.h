#ifndef HIDDENLAYER_H
#define HIDDENLAYER_H

#include "layeri.h"

class HiddenLayer :public LayerI
{
    std::vector<std::vector<float>> weights;

public:
    HiddenLayer(int outputSize, std::unique_ptr<LayerI> previousLayer, std::function<float(float)> activFunction);
};

#endif // HIDDENLAYER_H
