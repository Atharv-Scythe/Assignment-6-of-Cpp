#include <iostream>
using namespace std;
void scanArray(int arr[], int n);
void replace(int arr[], int n);
void printArray(int arr[], int n);
int main()
{
    /* 21.Scan array of n integers from user.Repce every value in the array by its square.. */

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements:" << endl;
    scanArray(arr, n);

    replace(arr, n);

    cout << "Array after replacement:" << endl;
    printArray(arr, n);

    delete[] arr;

    return 0;
}
void scanArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void replace(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i]= arr[i] * arr[i]; 
    }
}
void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
