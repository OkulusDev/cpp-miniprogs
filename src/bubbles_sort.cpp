#include <iostream>
#include <cstdlib>

int main() {
    const int arrayLength = 10;
    int s;
    srand(2);
    
    int numberArray[arrayLength];

    std::cout << "Массив до сортировки: " << std::endl;
    
    for (int i = 0; i < arrayLength; i++) {
        numberArray[i] = rand() % 10;
        std::cout << numberArray[i];
    }

    std::cout << std::endl;

    std::cout << "Массив после сортировки:" << std::endl;
    
    for (int i = 0; i < arrayLength - 1; i++) {
        for (int j = 0; j < arrayLength - i; j++) {
            if (numberArray[j] > numberArray[j + 1]) {
                s = numberArray[j + 1];
                numberArray[j + 1] = numberArray[j];
                numberArray[j] = s;
            }
        }
    }

    for (int k = 0; k < arrayLength; k++) {
        std::cout << numberArray[k];
    }

    std::cout << std::endl;

    return 0;
}

