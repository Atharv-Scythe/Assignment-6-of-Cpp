#include <iostream>
using namespace std;
int x = 100;
int main()
{
    /* Q9. WAP to understand scope resolution operator. */

    int x = 9;
    
	cout<<"\n Access local x in main by x ="<<x;
    cout <<"\nAccess global x in main using :: = " << ::x << endl;

    return 0;
}
