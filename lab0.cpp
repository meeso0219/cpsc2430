// Changhyun, Park
// lab0.cpp
// 03/13/24

#include <iostream>

using namespace std;

int max_value(int input_array[10])
{
    int maximum_value = 0;

    for (int i = 0; i < 10; i++)
    {
        if (maximum_value < input_array[i])
        {
            maximum_value = input_array[i];
        }
    }

    return maximum_value;
}

int main()
{
    cout << "Welcome message" << endl;
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        int number = -1;
        cin >> number;
        arr[i] = number;
    }

    for (int j = 0; j < 10; j++)
    {
        cout << "#" << j + 1 << ": " << arr[j] << endl;
    }

    cout << "The maximum value is: " << max_value(arr) << endl;

    cout << endl
        << "End of Lab 0 Program" << endl;

    return 0;
}
