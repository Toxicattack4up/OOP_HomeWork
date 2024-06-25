#include "WashingMachine.h"

WashingMachine::WashingMachine(int weight, LoadingType loadingtype)
	: Appliances(weight), _loadingtype(loadingtype)
{
}

void WashingMachine::ShowSpec()
{
	Appliances::ShowSpec();
	std::cout << "��� ��������: " << (_loadingtype == LoadingType::Front ? "�����������" : "������������") << std::endl;
}