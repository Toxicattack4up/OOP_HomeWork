#pragma once
#include "Appliances.h"
#include "Device.h"

class Phone : public Appliances, public Device
{
public:
    Phone(int weight, int batteryLife);
    void ShowSpec() override;
};