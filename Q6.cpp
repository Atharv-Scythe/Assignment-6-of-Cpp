#include <iostream>
using namespace std;
int main()
{
    /* Q6. Scan length and width of a rectangle. Find area and perimeter of rectangle.
       Write 3 programs for following 3 methods.
       - parameter passing by value
       - parameter passing by reference
       - parameter passing by address */
    int l, w;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    int area1 = l * w;
    int peri1 = 2 * (l + w);
    cout << "\nBy Value:" << endl;
    cout << "Area = " << area1 << endl;
    cout << "Perimeter = " << peri1 << endl;

    int area2, peri2;
    int &rl = l;
    int &rw = w;

    area2 = rl * rw;
    peri2 = 2 * (rl + rw);

    cout << "\nBy Reference:" << endl;
    cout << "Area = " << area2 << endl;
    cout << "Perimeter = " << peri2 << endl;

    int *pl = &l;
    int *pw = &w;

    int area3 = (*pl) * (*pw);
    int peri3 = 2 * ((*pl) + (*pw));

    cout << "\nBy Address:" << endl;
    cout << "Area = " << area3 << endl;
    cout << "Perimeter = " << peri3 << endl;

    return 0;
}
