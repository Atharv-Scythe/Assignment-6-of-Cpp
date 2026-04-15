#include <iostream>
using namespace std;
void scanArray(int arr[], int size);
int sumArray(int arr[], int size);
int main()
{
    /* Q14. Scan array of 8 integers from user. Print addition of all values in the array.
       Use of function for each task expected. */

    int arr[8];

    cout << "Enter 8 integers:" << endl;
    scanArray(arr, 8);

    int result = sumArray(arr, 8);

    cout << "Sum of array = " << result << endl;

    return 0;
}
void scanArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int sumArray(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum += + arr[i];
    }

    return sum;
}
