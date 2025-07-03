#include <iostream>

int main()
{
    int count;

    std::cout << "Enter count of elements: ";
    std::cin >> count;

    int* nums = new int[count];

    int user_input;

    for (int i = 0; i < count; i++) {
        std::cout << "Enter value: ";
        std::cin >> user_input;
        nums[i] = user_input;
    }

    std::cout << std::endl;

    for (int i = 0; i < count; i++)
        std::cout << "El: " << nums[i];

    delete[] nums;

    /*
    При попытке запуска кода:

    for (int i = 0; i < count; i++)
        std::cout << "El: " << nums[i];
        
    Возникает ошибка, так как помять с nums была ранее очищена.
    Всё работает корректно!
    */
    
}