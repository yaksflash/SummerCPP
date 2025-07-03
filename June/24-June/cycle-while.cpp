#include <iostream>
using namespace std;

int main()
{
    /*
    Практика цикла while. Программа перебирает значения num и выводит в консоль.
    В конце добавляется фраза "может быть следующее число ...".
    Если следующее число есть - сначала выводится подтверждение :)  
    */

    // НЕ УЧТЕНО: Цикл может стать бесконечным :}

    setlocale(LC_ALL, "RU");

    float num, last, change, first;

    cout << "Введите начальное (меньшее) значение: ";
    cin >> num;

    cout << "Введите конечное (большее) значение: ";
    cin >> last;

    cout << "Введите изменение (положительное число): ";
    cin >> change;

    if (num > last || change == 0) {
        cout << "ЯВНО НЕВЕРНЫЙ ВВОД!";
        return -1;
    }

    first = num;

    while (num <= last) {
        if (first != num)
            cout << "YES!" << endl;

        cout << "NUM: " << num << endl << endl;
        cout << "Maybe next " << num + change << "?" << endl;

        num += change;
    }

    cout << "No more!";

}
