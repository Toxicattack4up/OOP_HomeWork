#include <iostream>
#include "Warehouse.h"
#include "Refrigerator.h"
#include "WashingMachine.h"
#include "Tablet.h"
#include "SmartPhone.h"
#include "Phone.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    Warehouse warehouse;

    IElectronics* fridge = new Refrigerator(80, 300, true); // Пример с морозильной камерой
    IElectronics* washer = new WashingMachine(70, LoadingType::Front);
    IElectronics* tablet = new Tablet(10, 12.5, true);
    IElectronics* smartphone = new SmartPhone(8, 6, 3);
    IElectronics* phone = new Phone(100, 10);

    // Добавление объектов на склад
    warehouse.AddItem(fridge);
    warehouse.AddItem(washer);
    warehouse.AddItem(tablet);
    warehouse.AddItem(smartphone);
    warehouse.AddItem(phone);

    warehouse.ShowAllItem();

    delete fridge;
    delete washer;
    delete tablet;
    delete smartphone;
    delete phone;

    return 0;
}
