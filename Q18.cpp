#include <iostream>
using namespace std;
void scanArray(int arr[], int n);
void copyArray(int src[], int dest[], int n);
void printArray(int arr[], int n);
int main()
{
    /* Q18. Define your function to copy one integer array in another array. */

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr1 = new int[n];
    int *arr2 = new int[n];

    cout << "Enter elements for first array:" << endl;
    scanArray(arr1, n);

    copyArray(arr1, arr2, n);

    cout << "Copied array elements:" << endl;
    printArray(arr2, n);

    delete[] arr1;
    delete[] arr2;

    return 0;
}
void scanArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void copyArray(int src[], int dest[], int n)
{
    for(int i = 0; i < n; i++)
    {
        dest[i] = src[i];
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
