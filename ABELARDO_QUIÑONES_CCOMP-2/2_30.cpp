#include <iostream>
using namespace std;

// Making a Difference

int main() {

    float weight, kg, BMI;
    cout << "Ingrese altura en metros: " << endl;
    cin >> weight;
    cout << "Ingrese peso en kilogramos: " << endl;
    cin >> kg;
    BMI = kg/(weight*weight);
    
    if (BMI<18.5)
        cout << "Estás bajo de peso: " << endl;
    if (18.5<BMI<24.9)  
        cout << "Estás en un peso normal: " << endl;
    if (25<BMI<29.9)  
        cout << "Estás con sobre peso: " << endl;
    if (30<BMI)  
        cout << "Tienes obecidad: " << endl;
        
    return 0;
}