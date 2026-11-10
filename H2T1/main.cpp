#include "Car.h"
#include "Rectangle.h"
#include "Student.h"

#include <iostream>
#include <memory>

int main()
{
    Car car;

    car.setBrand("Toyota");
    car.setModel("Corolla");
    car.setYearModel(2020);

    std::cout << "AUTON TIEDOT:" << std::endl;

    car.printData();

    std::cout << std::endl;



    Rectangle* rectangle = new Rectangle;

    rectangle->setWidth(5.0);
    rectangle->setHeight(3.0);

    std::cout << "SUORAKULMIO:" << std::endl;

    std::cout << "Pinta-ala: "
              << rectangle->getArea() << std::endl;

    std::cout << "Ymparysmitta: "
              << rectangle->getCircum() << std::endl;

    delete rectangle;

    std::cout << std::endl;


    std::unique_ptr<Student> student =
        std::make_unique<Student>();

    student->setName("Maija Meikalainen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    std::cout << "OPISKELIJAN TIEDOT:" << std::endl;

    std::cout << "Nimi: "
              << student->getName() << std::endl;

    std::cout << "Opiskelijanumero: "
              << student->getStudentNumber() << std::endl;

    std::cout << "Keskiarvo: "
              << student->getAverage() << std::endl;

    return 0;
}
