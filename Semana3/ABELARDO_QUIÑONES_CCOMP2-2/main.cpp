#include <iostream>
#include "MotorVehicle.h"
#include "Date.h"
using namespace std;

// Link Repository:
// https://github.com/AbelardoQuinones00/CCOMP2-2.2-Abelardo/tree/main/Semana3/ABELARDO_QUI%C3%91ONES_CCOMP2-2

int main(){
    
    // MotorVehicle Class
    
    cout << "MotorVehicle Class";
    MotorVehicle mV1{"Fuel_0","White",3000};
    MotorVehicle mV2{"Fuel_1","Black",4000};

    mV1.setMake("Alemania");
    mV1.setYearOfManufacture(2020);
    mV2.setMake("England");
    mV2.setYearOfManufacture(2021);

    mV1.DisplayCarDetails();
    mV2.DisplayCarDetails();

    // Date Class
    cout << "\nDate Class";
    Date D1{5,15,2200};
    Date D2{15,30,2022};

    D1.displayDate();
    D2.displayDate();

    return 0;
}

