#include "Device.h"

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpec()
{
    std::cout << "����� ������: " << _batteryLife << std::endl;
}