#include <iostream>
using namespace std;

// Table

int main() {
    int face, SArea, Volume;
    
    face = 0;
    SArea = 6 * (face * face);
    Volume = face * face * face;
    cout << "Face lenght\tSurface area\tVolume\nof cube(cm)\tofcube (cm^2)\tof cube(cm^3)" << endl;
    cout << face << "\t\t" << SArea << "\t\t" << Volume << endl;
    
    face = 1;
    SArea = 6 * (face * face);
    Volume = face * face * face;
    cout << face << "\t\t" << SArea << "\t\t" << Volume << endl;
    
    face = 2;
    SArea = 6 * (face * face);
    Volume = face * face * face;
    cout << face << "\t\t" << SArea << "\t\t" << Volume << endl;
    
    face = 3;
    SArea = 6 * (face * face);
    Volume = face * face * face;
    cout << face << "\t\t" << SArea << "\t\t" << Volume << endl;
    
    face = 4;
    SArea = 6 * (face * face);
    Volume = face * face * face;
    cout << face << "\t\t" << SArea << "\t\t" << Volume << endl;
    
    // Ahora me di cuenta que era más fácil y rápido era que yo mismo
    // escriba los números TuT
    
    return 0;
}
