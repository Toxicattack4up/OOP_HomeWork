#include "Device.h"

Device::Device(int batteryLife) : _batteryLife(batteryLife)
{
}

void Device::ShowSpec()
{
    std::cout << "Время работы: " << _batteryLife << std::endl;
}