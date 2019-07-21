#include "Layers/hiddenlayer.h"
#include "Layers/layeri.h"
#include <vector>


class HiddenNetwork{

public:
    HiddenNetwork(LayerI* firstLayer, int numberOfHiddenLayers, std::function<float(float)> activFunction);
    LayerI *getLastLayer();

private:
    std::vector<HiddenLayer> hiddenLayers;

};
