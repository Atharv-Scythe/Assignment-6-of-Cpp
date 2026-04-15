#include <iostream>
using namespace std;
void scanArray(int arr[], int size);
int findSmallest(int arr[], int size);
int main()
{
    /* Q13. Scan array of 5 integers from user and find the smallest value.
       Use of function for each task expected. */

    int arr[5];

    cout << "Enter 5 integers:" << endl;
    scanArray(arr, 5);

    int result = findSmallest(arr, 5);

    cout << "Smallest value = " << result << endl;

    return 0;
}
void scanArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int findSmallest(int arr[], int size)
{
    int min = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}
