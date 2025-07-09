#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> split(const string &text, string separator) {
    vector<string> result;
    int index, start = 0;

    size_t pos = text.find(separator);
    string val;
    while (pos != string::npos) {

        val = text.substr(start, pos - start);
        result.push_back(val);
        start = pos + separator.size();

        pos = text.find(separator, start);
    }

    val = text.substr(start, pos - start);
    result.push_back(val);

    return result;
}

int main()
{

    setlocale(LC_ALL, "RU");
    string str, sep;

    cout << "Введите строку: ";
    cin >> str;

    cout << "Введите разделитель: ";
    cin >> sep;

    vector<string> result = split(str, sep);

    ofstream file("file.txt", ios_base::out);
    if (file.is_open()) {
        for (int i = 0; i < result.size(); i++) {
            file << result[i] << endl;
        }
    }
    


}
