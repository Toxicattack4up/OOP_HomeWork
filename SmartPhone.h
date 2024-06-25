#pragma once
#include "Device.h"
class SmartPhone : public Device
{
public:
	SmartPhone(int battaryLife, int ScreenSize, int Camers);
	void ShowSpec() override;
private:
	int _ScreenSize, _Camers;
};