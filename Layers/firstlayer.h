#ifndef FIRSTLAYER_H
#define FIRSTLAYER_H
#include <vector>

#include "layeri.h"

class FirstLayer :public LayerI
{


public:
    FirstLayer(int sizeOfInput);
    void processInputs();
    void loadInputs(std::vector<float>*);
};


#endif // FIRSTLAYER_H
