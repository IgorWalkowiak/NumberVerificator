#ifndef OUTPUTLAYER_H
#define OUTPUTLAYER_H


#include "layeri.h"

class OutputLayer :public LayerI
{

public:
    OutputLayer(int outputSize, LayerI* previousLayer, std::function<float(float)> activFunction);
    void processInputs();
};

#endif // OUTPUTLAYER_H
