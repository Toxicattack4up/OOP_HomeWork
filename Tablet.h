#pragma once
#include "Device.h"
class Tablet :  public Device
{
public:
	Tablet(int batteryLife, float ScreenSize, bool Stilus);
	void ShowSpec() override;

private:
	float _ScreenSize;
	bool _Stilus;
};