#include <iostream>
using namespace std;

int main()
{
    int arrays[5];
    int temp;

    // Input
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Number " << i + 1 << ": ";
        cin >> arrays[i];
    }

    // Sorting
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arrays[i] > arrays[j])
            {
                temp = arrays[i];
                arrays[i] = arrays[j];
                arrays[j] = temp;
            }
        }
    }

    // Output
    cout << "\nAscending Order:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << arrays[i] << " ";
    }

    return 0;
}