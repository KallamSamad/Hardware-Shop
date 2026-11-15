#pragma once
#include <string>
using namespace std;
class Hardware
{
public:
	virtual void readFromUser() = 0;
	void listHardware(const int noofitems, Hardware** hardware);
	void readBasicInfo();
	string getManufacturer() const;
	string getProductName() const;
	virtual ~Hardware() = default;
private:
	string manufacturer=" ";
	string productName = " ";
};

