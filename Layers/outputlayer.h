#ifndef OUTPUTLAYER_H
#define OUTPUTLAYER_H


#include "layeri.h"

class OutputLayer :public LayerI
{

public:
    OutputLayer(int outputSize, std::unique_ptr<LayerI> previousLayer, std::function<float(float)> activFunction);
};

#endif // OUTPUTLAYER_H
