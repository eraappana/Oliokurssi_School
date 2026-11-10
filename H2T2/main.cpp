#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

int main()
{

    vector<Car> carList;

    carList.push_back(Car("Toyota", "Corolla", 2020));
    carList.push_back(Car("Volvo", "v90", 2021));
    carList.push_back(Car("mercedes", "C63", 2016));

    cout << "Listan toinen auto:" << endl;
    carList[1].printData();

    cout << "Kaikki autot:" << endl;

    for (int i = 0; i < carList.size(); i++)
    {
        carList[i].printData();
    }
    return 0;
}
