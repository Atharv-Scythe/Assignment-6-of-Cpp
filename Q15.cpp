#include <iostream>
using namespace std;
int* getAddress(int x)
{	
    return &x;
}
int main()
{
    /* Q15. WAP to understand function returning address. */

	//new thing the stackfarame is destroyed the address inside the pointer is accessible 
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int *ptr = getAddress(num);

    cout << "Value = " << *ptr << endl;
    cout << "Address of pointer = " << (long long int)ptr << endl;
	cout << "Address of num = " << (long long int)&num << endl;
    return 0;
}
