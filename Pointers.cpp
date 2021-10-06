#include <iostream>
using namespace std;

int main()
{
	int a = 12;
	int *aPointer;
	aPointer = &a;

	cout << "Value of a = " << a << endl;
	cout << "Address of a = " << &a << endl;
	cout << "Value of aPointer = " << aPointer << endl;
	cout << "Address of aPointer = " << &aPointer << endl;
	cout << "Printing *aPointer prints the value stored in that address: " << *aPointer << endl;





}