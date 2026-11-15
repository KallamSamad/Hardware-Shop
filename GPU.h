#pragma once
#include "Hardware.h"
#include <string>
using namespace std;
class GPU :
    public Hardware
{
public:
    void readFromUser();
  

private:
    string vendor = " ";
    string productName = " ";
    int memorySize = 0;
    int maxClockSpeed = 0;
    string coreClock;
    string memoryClock;
};

