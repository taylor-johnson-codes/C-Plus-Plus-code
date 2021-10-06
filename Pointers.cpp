#include <iostream>
using namespace std;

int main()
{
	
	int a = 12;
	// int *aPointer = &a;
	int *aPointer;
	aPointer = &a;

	cout << "Value of a = " << a << endl;
	cout << "Address of a = " << &a << endl;
	cout << "Value of aPointer = " << aPointer << endl;
	cout << "Address of aPointer = " << &aPointer << endl;
	cout << "Printing *aPointer prints the value stored in that address: " << *aPointer << endl;
	cout << endl;

	/*
	int b = 10;
	int c = 5;

	b = c + *aPointer;
	cout << b << endl;

	b = c *(*aPointer);
	cout << b << endl;
	*/


	* aPointer = 4;
	cout << "Ran aPointer = 4;" << endl;
	cout << "Value of a = " << a << endl;
	cout << "Address of a = " << &a << endl;
	cout << "Value of aPointer = " << aPointer << endl;
	cout << "Address of aPointer = " << &aPointer << endl;
	cout << "Printing *aPointer prints the value stored in that address: " << *aPointer << endl;


}