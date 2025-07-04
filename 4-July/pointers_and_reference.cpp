#include <iostream>
#include <vector>
using namespace std;

int minValueOfArray(int * array, int len) {
    int min = *array;
    for (int i = 0; i < len; i++) {
        if (min > *(array + i)) 
            min = *(array + i);
    }

    return min;
}

int main()
{
    int count, user_input;
    vector<int> numbers;
    
    cout << "Enter len of array: ";
    cin >> count;
    
    while (count != 0) {
        cout << "Enter val: ";
        cin >> user_input;

        numbers.push_back(user_input);

        count--;
    }

    
    cout << "Min value: " << minValueOfArray(numbers.data(), numbers.size());

    return 0;
}
