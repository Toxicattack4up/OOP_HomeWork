#pragma once
#include "Appliances.h"
class Refrigerator : public Appliances
{
public:
	Refrigerator(int weight, int Capacity, bool Freezer);
	void ShowSpec() override;

private:
	int _Capacity;
	bool _Freezer;	
};