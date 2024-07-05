#pragma once
#include <vector>
#include "IElectronics.h"

class Warehouse
{
public:
	void AddItem(IElectronics* item);
	void ShowAllItem() const;

private:
	std::vector<IElectronics*> items;
};