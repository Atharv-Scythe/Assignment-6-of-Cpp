#include <iostream>
using namespace std;
int add(int a, int b = 10);
int multiply(int a = 2, int b = 3);
int main()
{
    /* 10.WAP to understand default arguments.*/
       
	int a;
	cout<<"\nEntr a=";
	cin>>a;
    cout << "Calling add(a): " << add(a) << endl;
    cout << "Calling add(5, 20): " << add(5, 20) << endl;

    cout << "Calling multiply(): " << multiply() << endl;
    cout << "Calling multiply(4): " << multiply(4) << endl;
    cout << "Calling multiply(a, 5): " << multiply(a, 5) << endl;
	
    return 0;
}
int add(int a, int b )
{
    return a + b;
}

int multiply(int a, int b )
{
    return a * b;
}

