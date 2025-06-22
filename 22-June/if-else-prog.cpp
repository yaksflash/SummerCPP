#include <iostream>
// using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); // Установить русский язык для консоли

    std::cout << "Введите ваш возраст: ";
    
    int age;
    std::cin >> age;

    if (age < 18)
        std::cout << "Вы весьма молоды :)";
    else if (age == 18)
        std::cout << "Сколько-сколько? 18?)";
    else if (age < 60)
        std::cout << "Вам меньше 60!";
    else
        std::cout << "Ого!";
    

    return 0; // Знак об успешном выполнении программы
}
