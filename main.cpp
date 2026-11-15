#include <iostream>
#include "CPU.h"
#include "Hardware.h"
#include "GPU.h"
#include "Memory.h"
using namespace std;
void listHardware(const int noofitems, Hardware** hardware);
Hardware** addCPU(int& noofitems, Hardware** hardware);
Hardware** addGPU(int& noofitems, Hardware** hardware);
// add additional function declarations here
int main()
{
#ifdef _DEBUG
	_CrtSetBreakAlloc(123);
	onexit(_CrtDumpMemoryLeaks);
#endif

	int noofitems = 0;

	Hardware** hardware = nullptr;
	int option;
	do
	{
		cout << "Welcome to the Hardware Database\n";
		cout << "--------------------------------\n";
		cout << "1) List all hardware\n";
		cout << "2) Add CPU\n";
		cout << "3) Add GPU\n";
		cout << "4) Add Memory\n";
		cout << "5) Exit\n";
		cin >> option;
		switch (option)
		{
		case 1: listHardware(noofitems, hardware); break;
		case 2: hardware = addCPU(noofitems, hardware); break;
		case 3: hardware=addGPU(noofitems, hardware); break;
			// case 4: hardware=addMemory(noofitems, hardware); break;
		case 5: break;
		default:
			cout << "Unknown option, please try again\n\n";
		}
	} while (option != 5);
	
	for (int i{ 0 }; i < noofitems; i++) {
		delete hardware[i];
		hardware[i] = nullptr;
	}
	delete[] hardware;
	hardware = nullptr;

	return 0;
}
void listHardware(const int noofitems, Hardware** hardware)
{
		for (int i = 0; i < noofitems; i++) {
			cout << hardware[i]->getManufacturer() << " Made by " << hardware[i]->getProductName() << "\n";
		}
	}

Hardware** addCPU(int& noofitems, Hardware** hardware)
{
	cout << "Adding new CPU\n";
	CPU* cpu = new CPU();
	cpu->readBasicInfo();
	cpu->readFromUser();
	hardware = (Hardware**)realloc(hardware,sizeof(Hardware**)*(noofitems+ 1));
 	hardware[noofitems] = cpu;
	noofitems++;
	return hardware;
}

Hardware** addGPU(int& noofitems, Hardware** hardware)
{

	cout << "Adding new GPU\n";
	GPU* gpu = new GPU();
	gpu->readBasicInfo();
	gpu->readFromUser();
	hardware = (Hardware**)realloc(hardware, sizeof(Hardware**) * (noofitems + 1));
	hardware[noofitems] = gpu;
	noofitems++;
	return hardware;
}

