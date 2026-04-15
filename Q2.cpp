#include <iostream>
using namespace std;
void access();
void test();
int main()
{
    /* Q2. WAP to understand static variable.
       - check if static variable can be accessed from other function.
       - check if static variable gets initial value again if we call that function again. */

    cout << "Calling test Function() multiple times:" << endl;

    test();
    test();
    test();

    access();

    return 0;
}
void test()
{
    static int count = 0;
    count++;
    cout << "Count in test() = " << count << endl;
}
void access()
{
    cout << "Static variable cannot be accessed directly in another function" << endl;
}
