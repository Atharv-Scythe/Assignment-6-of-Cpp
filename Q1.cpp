#include <iostream>
using namespace std;
void func1();
void func2();
void testLocalScope();
int x = 100;
int main()
{
    /* Q1. WAP to understand global variable and local variable. Check the following points.
       - can we declare two local variables with same name?
       - Check if local variable of one function is accessible in another function or not.
       - Check if global variables can have same name or not.
       - Check if global variable can be initialized at declaration or not.
       - change value of global variable from one function,and check if this change
         is visible in another function or not.
       - try to access global variable when local and global have same names. */

    int x = 50;
    cout << "main local x = " << x << endl;
    cout << "global x using scope resolution = " << ::x << endl;

    func1();
    func2();

    testLocalScope();

    return 0;
}
void func1()
{
    int x = 10;
    cout << "func1 local x = " << x << endl;

    ::x = 200;
}
void func2()
{
    cout << "func2 global x = " << x << endl;
}

void testLocalScope()
{
    int a = 5;
    cout << "Local variable a in testLocalScope = " << a << endl;
}
