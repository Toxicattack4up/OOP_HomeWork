#pragma once
#include "Appliances.h"
#include "LoadingType.h"

class WashingMachine : public Appliances
{
public:
	WashingMachine(int weight, LoadingType loadingtype);
	void ShowSpec() override;

private:
	LoadingType _loadingtype;
};

