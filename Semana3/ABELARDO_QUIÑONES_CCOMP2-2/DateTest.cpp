#include <iostream>
#include "MotorVehicle.h"
#include "Date.h"
using namespace std;

// Link Repository:
// https://github.com/AbelardoQuinones00/CCOMP2-2.2-Abelardo/tree/main/Semana3/ABELARDO_QUI%C3%91ONES_CCOMP2-2

int main(){
    
    // Date Class
    cout << "\nDate Class";
    Date D1{5,15,2200};
    Date D2{15,30,2022};

    D1.displayDate();
    D2.displayDate();

    return 0;
}

