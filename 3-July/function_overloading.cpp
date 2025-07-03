#include <iostream>
#include <string>

using namespace std;

string helloUserFunc(string name);
int countSum(int num1, int num2);
void print(string word);
void print(int word);

int main()
{
	setlocale(LC_ALL, "RU");

	string userName;
	int num1, num2;

	cout << "Добро пожаловать!\nКак вас зовут? Введите имя: ";
	cin >> userName;

	print(helloUserFunc(userName));

	cout << "Введите первое число для сложения: ";
	cin >> num1;

	cout << "Введите второе число для сложения: ";
	cin >> num2;

	print(countSum(num1, num2));
}

string helloUserFunc(string name) {
	return "Привет, " + name + "!";
}

int countSum(int num1, int num2) {
	return num1 + num2;
}


// ПЕРЕГРУЗКА ФУНКЦИИ:

void print(string word) {
	cout << word << endl;
}

void print(int word) {
	cout << word << endl;
}