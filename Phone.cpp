#include "Phone.h"

Phone::Phone(int weight, int batteryLife)
    : Appliances(weight), Device(batteryLife)
{
}

void Phone::ShowSpec()
{
    Appliances::ShowSpec();
    Device::ShowSpec();
}