#include "Appliances.h"

Appliances::Appliances(int weight) : _weight(weight)
{
}

void Appliances::ShowSpec()
{
    std::cout << "־בתול (כ): " << _weight << std::endl;
}