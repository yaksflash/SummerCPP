#include <iostream>
// using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); // Установить русский язык для консоли


    // Получаем от пользователя два значения (могут быть с точкой)
    float num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;


    // Получаем от пользователя символ математической операции

    char operation;
    
    std::cout << "Введите значок мат.операции (+/-*): ";
    std::cin >> operation;


    // Проверяем операцию и выводим результат

    switch (operation) {
    case ('*'):
        std::cout << "Результат: " << num1 * num2;
        break;
    case ('+'):
        std::cout << "Результат: " << num1 + num2;
        break;
    case ('-'):
        std::cout << "Результат: " << num1 - num2;
        break;
    case ('/'):
        std::cout << "Результат: " << num1 / num2;
        break;
    default:
        std::cout << "Вы явно ошиблись с символом операции!";
        break;

    }


    return 0; // Знак об успешном выполнении программы
}