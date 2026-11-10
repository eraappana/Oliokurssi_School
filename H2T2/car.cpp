#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(string brand, string model, int yearModel)
{
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}
void Car::printData()
{
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Valmistusvuosi: " << yearModel << endl;
    cout << "-------------------" << endl;
}
