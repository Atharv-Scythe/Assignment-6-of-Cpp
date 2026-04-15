#include <iostream>
using namespace std;

int main()
{
    /* Q3. Write a program to understand pointer arithmetic.
       - create an array of 5 integers.
       - create an array of 5 characters
       - create an array of 5 double values.
       - Print addresses and values of each array, check the difference between elements.
       - Create three pointers for three arrays. Using these three pointers print all the array elements.
       - Using integer pointer of integer array, print square of each element in array.
       - using character pointer of character array, print ascii value of each character
       - using double pointer for double array, print values greater than 10.
       - scan a number x from user. Using integer pointer search that x in integer array.
       - declare a target array of double datatype, using double pointer, copy double array into target array. */

    int arrInt[5] = {1, 2, 3, 4, 5};
    char arrChar[5] = {'A', 'b', 'C', 'd', 'E'};
    double arrDouble[5] = {5.5, 12.3, 8.7, 15.2, 3.1};

    int *pInt = arrInt;
    char *pChar = arrChar;
    double *pDouble = arrDouble;

    cout << "Integer Array's (Address and Value):";
    for(int i = 0; i < 5; i++)
    {
        cout << (pInt + i) << " -> " << *(pInt + i) <<'\n';
    }

    cout << "\nCharacter Array (Address and Value):" << '\n';
    for(int i = 0; i < 5; i++)
    {
        cout << (pChar + i) << " -> " << *(pChar + i) << '\n';
    }

    cout << "\nDouble Array (Address and Value):" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << (pDouble + i) << " -> " << *(pDouble + i) << endl;
    }

    cout << "\nDifference between consecutive integer elements: " << (pInt + 1) - pInt << endl;
    cout << "Difference between consecutive char elements: " << (pChar + 1) - pChar << endl;
    cout << "Difference between consecutive double elements: " << (pDouble + 1) - pDouble << endl;

    cout << "\nPrinting elements using pointers:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << *(pInt + i) << " ";
    }
    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(pChar + i) << " ";
    }
    cout << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(pDouble + i) << " ";
    }
    cout << endl;

    cout << "\nSquare of integer array elements:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << (*(pInt + i)) * (*(pInt + i)) << " ";
    }
    cout << endl;

    cout << "\nASCII values of characters:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << int(*(pChar + i)) << " ";
    }
    cout << endl;

    cout << "\nDouble values greater than 10:" << endl;
    for(int i = 0; i < 5; i++)
    {
        if(*(pDouble + i) > 10)
        {
            cout << *(pDouble + i) << " ";
        }
    }
    cout << endl;

    int x;
    cout << "\nEnter number to search in integer array: ";
    cin >> x;

    bool found = false;
    for(int i = 0; i < 5; i++)
    {
        if(*(pInt + i) == x)
        {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Number found" << endl;
    else
        cout << "Number not found" << endl;

    double target[5];
    double *pTarget = target;

    for(int i = 0; i < 5; i++)
    {
        *(pTarget + i) = *(pDouble + i);
    }

    cout << "\nCopied double array:" << endl;
    for(int i = 0; i < 5; i++)
    {
        cout << *(pTarget + i) << " ";
    }
    cout << endl;

    return 0;
}
