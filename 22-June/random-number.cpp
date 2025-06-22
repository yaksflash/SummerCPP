#include <iostream>
// #unclude <time.h>

int main()
{
    std::srand(std::time(0)); // инициализация генератора случайных чисел
    int randomNumber = 1 + std::rand() % 100; // число от 1 до 99

    std::cout << "Случайное число: " << randomNumber << std::endl;

    return 0;
}
