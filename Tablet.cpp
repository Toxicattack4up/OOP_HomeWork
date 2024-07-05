#include "Tablet.h"

Tablet::Tablet(int batteryLife, float ScreenSize, bool Stilus)
	: Device(batteryLife), _ScreenSize(ScreenSize), _Stilus(Stilus)
{
}

void Tablet::ShowSpec()
{
	Device::ShowSpec();
	std::cout << "Размер экрана: " << _ScreenSize << std::endl;
	std::cout << "Поддержка стилуса: " << (_Stilus ? "есть" : "нет");
}