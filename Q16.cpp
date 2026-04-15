#include <iostream>
using namespace std;
int main()
{
    /* Q16. Scan n integers from array. Print addition of all values in the array.
       Write whole code in main() only. Use new operator. */

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum = " << sum << endl;

    delete[] arr;

    return 0;
}
