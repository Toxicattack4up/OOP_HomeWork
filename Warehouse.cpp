#include "Warehouse.h"

void Warehouse::AddItem(IElectronics* item)
{
	items.push_back(item); 
}

void Warehouse::ShowAllItem() const
{
	for (int i = 0; i < items.size(); ++i)
	{
		items[i]->ShowSpec();
		std::cout << std::endl;
	}
}