#ifndef LAYERI_H
#define LAYERI_H

#include <vector>
#include <memory>
#include <functional>

class LayerI
{
protected:
    std::vector<float>* mInputData;
    std::unique_ptr<std::vector<float>> mOutputData;
    LayerI *mPreviousLayer;
    std::function<float(float)> mActivFunction;


public:
    LayerI(LayerI* previousLayer, std::function<float(float)> activFunction);
    LayerI(std::function<float(float)> activFunction);


    std::vector<float>* getOutputs();
    int getOutputSize();
    int getPreviousLayerOutputSize();
    virtual void processInputs()=0;

};

#endif // LAYERI_H
