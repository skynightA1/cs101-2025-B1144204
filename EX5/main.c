/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct {
    char brand[20];
    char model[20];
    int year;
    int seating;
    char driveMode[20];
} Car;


Car createCar(const char* brand, const char* driveMode, const char* model, int year, int seat) {
    Car car;
    strcpy(car.brand, brand);
    strcpy(car.driveMode, driveMode);
    strcpy(car.model, model);
    car.year = year;
    car.seating = seat;
    printf("Constructing %s_Car\n", brand);
    return car;
}

void printCarInfo(Car car) {
    printf("%s : Drive Mode = %s\n", car.brand, car.driveMode);
}

int main() {
    Car car_0 = createCar("CGU", "CSIE", "CSIE", 2023, 4);
    printCarInfo(car_0);

    Car bmw = createCar("BMW", "Rear-wheel", "X5", 2023, 6);
    printCarInfo(bmw);

    Car audi = createCar("AUDI", "Front-wheel", "A1", 2023, 5);
    printCarInfo(audi);

    Car benz = createCar("BENZ", "Front-wheel", "C-Class", 2024, 5);
    printCarInfo(benz);

    return 0;
}
