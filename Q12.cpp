#include <iostream>
using namespace std;
int add(int a, int b, int c=9);
int main()
{
    /* Q12. WAP to understand default arguments with function overloading. */
    
    cout << "add(5, 10, 20) = " << add(5, 10, 20) << endl;

    cout << "add(5, 10) using default argument (3rd param) = " << add(5, 10) << endl;

    return 0;
}

int add(int a, int b, int c)
{
    return a + b + c;
}
