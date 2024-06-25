#include "WashingMachine.h"

WashingMachine::WashingMachine(int weight, LoadingType loadingtype)
	: Appliances(weight), _loadingtype(loadingtype)
{
}

void WashingMachine::ShowSpec()
{
	Appliances::ShowSpec();
	std::cout << "Тип загрузки: " << (_loadingtype == LoadingType::Front ? "фронтальная" : "вертикальная") << std::endl;
}