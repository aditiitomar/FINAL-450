// Find the maximum and minimum element in an array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, i, max = 0, min = 0;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter elements: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum Element: ";
    cout << max << "\n";
    cout << "Minimum Element: ";
    cout << min << "\n";

    return 0;
}