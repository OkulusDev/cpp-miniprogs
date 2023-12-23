/* Перевод милей в километры, метры
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

double convertMilesToMetres(double distMile) {
    double metresInMile = 1.609344 * 1000;

    return metresInMile * distMile;
}

double convertMilesToFt(double distMile) {
    double ftInMile = 5280.0;

    return ftInMile * distMile;
}

int main(int argc, char *argv[]) {
    double km;
    double m;
    double ft;

    if (argc > 1) {
        // If argument mode
        km = convertMilesToKm(atoi(argv[1])); 
        m = convertMilesToMetres(atoi(argv[1]));
        ft = convertMilesToFt(atoi(argv[1]));
        std::cout << argv[1] << " милей = " << km << " километров" << std::endl;
        std::cout << argv[1] << " милей = " << m << " метров" << std::endl;
        std::cout << argv[1] << " милей = " << ft << " футов" << std::endl;
    } else {
        // Without arguments
        double miles;

        std::cout << "Введите дистанцию в милях: ";
        std::cin >> miles;

        km = convertMilesToKm(miles);
        m = convertMilesToMetres(miles);
        ft = convertMilesToFt(miles);

        std::cout << miles << " милей = " << km << " километров" << std::endl;
        std::cout << miles << " милей = " << m << " метров" << std::endl;
        std::cout << miles << " милей = " << ft << " футов" << std::endl;
    }

    return 0;
}

