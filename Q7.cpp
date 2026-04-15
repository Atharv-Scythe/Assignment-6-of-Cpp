#include <iostream>
using namespace std;
int add(int a, int b = 10);
int multiply(int a = 2, int b = 3);
int main()
{
    /* Q7. WAP to understand working of default arguments. Perform experiments.
       Generate errors by violating rules. */
       
    //here we cant declare add(int a=2,int b),genrates error as the default value must be at end of parameter lsit;
    //also we cant make a value default in function defenation if we already gave the default values in prototype

    cout << "Calling add(5): " << add(5) << endl;
    cout << "Calling add(5, 20): " << add(5, 20) << endl;

    cout << "Calling multiply(): " << multiply() << endl;
    cout << "Calling multiply(4): " << multiply(4) << endl;
    cout << "Calling multiply(4, 5): " << multiply(4, 5) << endl;

    

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

