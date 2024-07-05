#include "Refrigerator.h"

Refrigerator::Refrigerator(int weight, int Capacity, bool Freezer)
	:	Appliances(weight), _Capacity(Capacity), _Freezer(Freezer)
{
}

void Refrigerator::ShowSpec()
{
	Appliances::ShowSpec();
	std::cout << "Объем: " << _Capacity << std::endl;
	std::cout << "Морозильная камера: " << (_Freezer ? "имеется" : "отсутствует") << std::endl;
}