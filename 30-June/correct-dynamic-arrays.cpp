#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums;
    int user_input;

    do {
        cout << "Enter num (\"0\" to end): ";
        cin >> user_input;

        if (user_input != 0)
            nums.push_back(user_input);
    } while (user_input != 0);

    cout << "READY!";

    for (int i = 0; i < nums.size(); i++) 
        cout << "El #" << i << " - " << nums[i] << endl;

    return 0;
}
