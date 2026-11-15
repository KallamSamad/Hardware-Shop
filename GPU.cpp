#include "GPU.h"
#include <iostream>
using namespace std;
void GPU::readFromUser() {
	cout << "Enter the Vendor" << "\n";
	cin >> vendor;
	cout << "Enter product name" << "\n";
	cin >> productName;
	cout << "Enter Memory Size "<< "\n";
	cin >> memorySize;
	cout << "Enter Max clock speed" << "\n";
	cin >> maxClockSpeed;
	cout << "Enter core Clock" << "\n";
	cin >> coreClock;
	cout << "Enter memory Clock" << "\n";
	cin >>memoryClock;

}

