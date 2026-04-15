#include <iostream>
using namespace std;
void sameName(int x);
void test(int a);
int main()
{
    /* Q5. WAP to check parameter passing rules. Check following points
       - can we mention datatypes for actual parameters?
       - can we change number of actual and formal parameters?
       - Does any change in formal parameter gets reflected back in actual parameters?
       - Can we keep their names same? If their names are same, do they affect each other? */

    int a = 10;

    cout << "Calling function with actual parameter (datatype not written):" << endl;
    test(a);

    cout << "Value of a in main after function call = " << a << endl;
    
    
    //test(int a) ; if datatype given it gives an error of expexcted primary expression 
    //test ( a,b) We can change the number of actual and formal as compiler genrates error , not if default arguments are given .

    cout << "\nCalling function with same variable name:" << endl;
    sameName(a);

    cout << "Value of a in main remains unchanged = " << a << endl;

    return 0;
}
void test(int a)
{
    a = a + 10;
    cout << "Inside function, a = " << a << endl;
}
void sameName(int x)
{
	x = x + 5;
    cout << "Inside sameName(), x = " << x << endl;
}
