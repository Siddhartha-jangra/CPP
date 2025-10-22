#include <iostream>


int main() {

    const int SPEED_OF_LIGHT = 300000000;
    int frequency = 321654; // if there is double here then it shows in decimal taken that "wavelength " is also in doble
    double wavelength = SPEED_OF_LIGHT/frequency;

    std::cout << wavelength << '\n';

    const double  AVAGADRO = 6.023e23;
    double no = 3.3366;
    double total = no * AVAGADRO;
    
    std::cout << "there is total of " << total << " molecules of chloroform present here.";

    return 0;
 
}