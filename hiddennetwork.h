#include "Layers/hiddenlayer.h"
#include "Layers/layeri.h"
#include <vector>


class HiddenNetwork{

public:
    HiddenNetwork(LayerI* firstLayer, int numberOfHiddenLayers, std::function<float(float)> activFunction);
    LayerI *getLastLayer();
    void processHiddenLayers();

private:
    std::vector<HiddenLayer> hiddenLayers;

};
