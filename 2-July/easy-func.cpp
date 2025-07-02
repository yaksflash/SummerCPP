#include <iostream>
#include <string>

using namespace std;

void helloUser(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main()
{
    string userInput;

    cout << "Enter your name: ";
    cin >> userInput;

    helloUser(userInput);
}
