#include <iostream>
#include <string>

using namespace std;

int summa(int num1, int num2) {
    return num1 + num2;
}

int main()
{
    int n1, n2;

    cout << "Enter num1: ";
    cin >> n1;
    cout << "Enter num2: ";
    cin >> n2;

    int res = summa(n1, n2);
    cout << res;
}
