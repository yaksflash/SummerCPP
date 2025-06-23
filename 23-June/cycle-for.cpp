#include <iostream>
using namespace std;

int main()
{
    /*
    Практика цикла for. Программа перебирает значения i и выводит в консоль.
    В конце добавляется фраза "может быть следующее число ...".
    Если следующее число есть - сначала выводится подтверждение :)
    */

    // НЕ УЧТЕНО: Цикл может стать бесконечным :}

    setlocale(LC_ALL, "RU");

    int i_first, i_last, i_change;

    cout << "Введите первое значение i: ";
    cin >> i_first;
    
    cout << "Введите последнее значение i: ";
    cin >> i_last;

    cout << "Введите изменение i: ";
    cin >> i_change;

    if (i_first > i_last) {
        cout << "Ого! Цикл в обратную сторону!";
        
        for (int i = i_first; i >= i_last; i += i_change) {
            if (i != 0)
                cout << "Yes!" << endl;

            cout << "Hello number " << i << endl;
            cout << "Maybe next will be " << i + i_change << "?" << endl;
        }

    }
    else {
        for (int i = i_first; i <= i_last; i += i_change) {
            if (i != 0)
                cout << "Yes!" << endl;

            cout << "Hello number " << i << endl;
            cout << "Maybe next will be " << i + i_change << "?" << endl;
        }
    }

    

    cout << "No anything more!";
    
    return 0;
}
