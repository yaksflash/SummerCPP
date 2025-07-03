#include <iostream>
// using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); // Установить русский язык для консоли

    std::cout << "Введите число: ";
    int num;
    std::cin >> num;

    switch (num) {
    case 1:
        std::cout << "1";
        break;
    case 2:
        std::cout << "2";
        break;
    default:
        std::cout << "else";
        break;
    }

    return 0; // Знак об успешном выполнении программы
}
