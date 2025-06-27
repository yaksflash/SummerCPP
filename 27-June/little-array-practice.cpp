#include <iostream>
using namespace std;

int main()
{
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter element #" << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) 
        cout << "Element #" << i + 1 << " - " << numbers[i] << endl;
    
}
