#ifndef LAYERI_H
#define LAYERI_H

#include <vector>
#include <memory>
#include <functional>

class LayerI
{
    std::shared_ptr<std::vector<float>> mInputData;
    std::shared_ptr<std::vector<float>> mOutputData;

    std::unique_ptr<LayerI> mPreviousLayer;


    std::function<float(float)> mActivFunction;


public:
    LayerI(int outputSize, std::unique_ptr<LayerI> previousLayer, std::function<float(float)> activFunction);
    LayerI(int outputSize); //firstLayer

    std::shared_ptr<std::vector<float>> getOutputs();

};

#endif // LAYERI_H
