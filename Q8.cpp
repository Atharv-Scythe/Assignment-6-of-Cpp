#include<iostream>
using namespace std;
void testblank();
void testvoid(void);
int main()
{
	//testblank(1) gives error while in C it dosent;
	testblank();
	testvoid();
}
void testblank()
{
	cout<<"\nIn test blank function "<<endl;
}
void testvoid(void)
{
	cout<<"\nIn test void function "<<endl;
}
