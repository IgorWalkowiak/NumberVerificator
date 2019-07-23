#include <iostream>
#include "csvparser.h"
#include <SFML/Graphics.hpp>
#include <cstdio>
#include "neuronnetwork.h"
using namespace std;

int main()
{
    NeuronNetwork neuronNetwork("train.csv", 4, 10, 784);
    neuronNetwork.loadAndParseCsvDataFromFile();
    neuronNetwork.startLearn();



    return 0;
}
