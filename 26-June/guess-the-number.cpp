#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    /*
    Игра - УГАДАЙ ЧИСЛО.

    Есть 3 уровня сложности:
    1) От 1 до 100 с любым количеством попыток
    2) От 1 до 100 за 15 попыток
    3) От 1 до 100 за 7 попыток
    */

    cout << "Игра - УГАДАЙ ЧИСЛО.\nЕсть 3 уровня сложности :\n1) От 1 до 100 с любым количеством попыток\n2) От 1 до 100 за 15 попыток\n3) От 1 до 100 за 7 попыток" << endl;

    int level;
    cout << "Введите уровень (1/2/3): ";
    cin >> level;

    int health = -1;
    switch (level) {
    case 2:
        health = 15; break;
    case 3:
        health = 7; break;
    }

    int answer, user_num;
    srand(time(0));
    answer = 1 + rand() % 100;

    string what_about_health;

    do {
        cout << "Введите число: ";
        cin >> user_num;
        health -= 1;

        if (health < 0)
            what_about_health = "";
        else
            what_about_health = " Еще попыток: " + health;
        
        if (user_num > answer) 
            cout << "Неверно! Правильное число меньше!" << endl;
        else if (user_num < answer) 
            cout << "Неверно! Правильное число больше!" << endl;
        
        if (level != 1)
            cout << "Осталось жизней: " << health << endl;

    } while ((user_num != answer) && (health != 0));
    
    if (health != 0)
        cout << "Вы отгадали загадку!";
    
}
