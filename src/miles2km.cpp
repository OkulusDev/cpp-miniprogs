/* Перевод милей в километры
Okulus Dev (C) 2023*/
#include <iostream>
#include <cstdlib>

double convertMilesToKm(double distMile) {
    /* Convert miles to kilometries

    Input:
     double distMile - distance in mils
    Output: */
    double kmInMile = 1.609344;

    return distMile * kmInMile;
}

int main(int argc, char *argv[]) {
    double km;

    if (argc > 1) {
        // If argument mode
        km = convertMilesToKm(atoi(argv[1])); 
        std::cout << argv[1] << " Miles = " << km << " Km" << std::endl;
    } else {
        // Without arguments
        double miles;

        std::cout << "Enter miles count: ";
        std::cin >> miles;

        km = convertMilesToKm(miles);

        std::cout << miles << " Miles = " << km << " Km" << std::endl; 
    }

    return 0;
}

