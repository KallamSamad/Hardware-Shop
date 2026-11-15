#pragma once
#include "Hardware.h"
#include <string>
using namespace std;
class Memory :
    public Hardware
{
public:
    void readFromUser();
 
private:
    string vendor;
    string productName;
    string capacity;
    string formFactor;
};

