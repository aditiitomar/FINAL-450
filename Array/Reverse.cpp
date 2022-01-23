// Write a program to reverse an array.
#include <bits/stdc++.h>
using namespace std;

void reverse(int start, int end, int arr[]) //function to reverse the array.
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int SizeOfArray) //function to print the array.
{
    for (int j = 0; j < SizeOfArray; j++)
    {
        cout << arr[j] << "\n";
    }
}

int main() //main function
{
    int size, i, j, n;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    // swapping method
    n = sizeof(arr) / sizeof(arr[0]);
    reverse(0, n - 1, arr);
    cout << "Reverse: "
         << "\n";
    printArray(arr, n);

    // other method
    // for (j = (size - 1); j >= 0; j--)
    // {
    //     cout << arr[j] << "\n";
    // }
    return 0;
}