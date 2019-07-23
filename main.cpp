#include "csvparser.h"
#include "neuronnetwork.h"
#include <SFML/Graphics.hpp>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  NeuronNetwork neuronNetwork("train.csv", 4, 10, 784);
  neuronNetwork.loadAndParseCsvDataFromFile();
  neuronNetwork.startLearn();

  return 0;
}
