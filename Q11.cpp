#include <iostream>
using namespace std;
int add(int a, int b);
int add(int a, int b, int c);
int main()
{
    /*11.WAP to understand function overloading. */
	int a,b,c;
    cout<<"\nEnter a , b , c : ";
    cin>>a>>b>>c;

    cout << "Addition of 2 integers a and b = " << add(a, b) << endl;
    cout << "Addition of 3 integers = " << add(a, b, c) << endl;
    
    return 0;
}
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
