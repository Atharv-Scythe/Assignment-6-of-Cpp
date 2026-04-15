#include <iostream>
using namespace std;
void scanArray(int *arr, int n);
int sumArray(int *arr, int n);
int main()
{
    /* Q17. Scan n integers from array. Print addition of all values in the array.
       Use of function for each task expected. */

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " integers:" << endl;
    scanArray(arr, n);

    int result = sumArray(arr, n);

    cout << "Sum = " << result << endl;

    delete[] arr;

    return 0;
}
void scanArray(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int sumArray(int *arr, int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}
