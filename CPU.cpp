#include "CPU.h"
#include <iostream>
using namespace std;

void CPU::readFromUser() {
	cout << "Enter the Vendor" << "\n";
	cin >> vendor;
	cout << "Enter product name" << "\n";
	cin >> productName;
	cout << "Enter number of cores" << "\n";
	cin >> numOfCores;
	cout << "Enter Max clock speed" << "\n";
	cin >> maxClockSpeed;

}

