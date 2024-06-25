#include "SmartPhone.h"

SmartPhone::SmartPhone(int battaryLife, int ScreenSize, int Camers)
	: Device(battaryLife), _ScreenSize(ScreenSize), _Camers(Camers)
{
}

void SmartPhone::ShowSpec()
{
	Device::ShowSpec();
	std::cout << "Размер экрана: " << _ScreenSize << "\n" 
		<< "Количество камер: " << _Camers << std::endl;
}