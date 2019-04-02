#include <iostream>
#include "csvparser.h"
#include <SFML/Graphics.hpp>
#include <cstdio>
#include "inputdatadeliver.h"
using namespace std;

int main()
{
    InputDataDeliver inputDataDeliver("train.csv");
    inputDataDeliver.parseInputData();




    return 0;
}
