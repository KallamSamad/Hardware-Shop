#include "Hardware.h"
#include <iostream>

using namespace std;


string Hardware::getManufacturer() const {
	return manufacturer;
}
string Hardware::getProductName() const {
	return productName;	
}


 void Hardware::readBasicInfo() {

	cout << "Give manufacturer" << "\n";
	cin >> manufacturer;
	cout << "Get product name" << "\n";
	cin >> productName;
}