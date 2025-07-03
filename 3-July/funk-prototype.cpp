#include <iostream>

int factorial(int number); // прототип функции

int main()
{
    std::cout << "Enter num: ";
    int num;
    std::cin >> num;

    std::cout << "Factorial is " << factorial(num);
}

int factorial(int number) {
    int res = 1;

    for (int i = 1; i <= number; i++)
        res *= i;

    return res;
}