#include "Refrigerator.h"

Refrigerator::Refrigerator(int weight, int Capacity, bool Freezer)
	:	Appliances(weight), _Capacity(Capacity), _Freezer(Freezer)
{
}

void Refrigerator::ShowSpec()
{
	Appliances::ShowSpec();
	std::cout << "����� ���������� ������: " << _Capacity << std::endl;
	std::cout << "����������� ������: " << (_Freezer ? "�������" : "�����������") << std::endl;
}