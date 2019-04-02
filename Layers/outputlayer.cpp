#include "outputlayer.h"


OutputLayer::OutputLayer(int outputSize, std::unique_ptr<LayerI> previousLayer, std::function<float (float)> activFunction)
    :LayerI(outputSize,std::move(previousLayer),activFunction)
{

}
