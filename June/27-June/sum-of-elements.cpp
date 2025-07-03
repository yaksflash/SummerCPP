#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> numbers[i];
    }

    int summa = 0;
    for (int j = 0; j < 5; j++)
        summa += numbers[j];

    cout << "Sum: " << summa;
    

}
