#pragma once
#include "Hardware.h"
#include <string>
using namespace std;
class CPU :
    public Hardware
{
public:
    void readFromUser();


private:
    string vendor = " ";
    string productName=" ";
    int numOfCores = 0;
    int maxClockSpeed = 0;

};

