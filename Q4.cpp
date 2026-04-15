#include <iostream>
using namespace std;
float add(float a, float b);
int add(int a, int b);
int add(int a, int b, int c);
int main()
{
    /* Q4. WAP to understand concept of function overloading.
       Write program for addition of 2 integers, addition of 3 integers, addition of 2 fractions.
       Try to generate ambiguity error and solve it using explicit typecasting. */

    int a = 10, b = 20, c = 30;
    float f1 = 2.5, f2 = 3.5;

    cout << "Addition of 2 integers = " << add(a, b) << endl;
    cout << "Addition of 3 integers = " << add(a, b, c) << endl;
    cout << "Addition of 2 fractions = " << add(f1, f2) << endl;

   	

    return 0;
}
float add(float a, float b)
{
    return a + b;
}
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
