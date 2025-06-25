#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int num, change, end;

    cout << "Введите число: ";
    cin >> num;

    cout << "Введите изменение: ";
    cin >> change;

    cout << "Введите конечное значение: ";
    cin >> end;

    if (change < 0) {
        change *= -1;
        cout << "Change теперь положительное!";
    }

    cout << "Element: " << num << endl;

    do {
        num -= change;
        cout << "Element: " << num << endl;
    } while (num - change > end);

}
