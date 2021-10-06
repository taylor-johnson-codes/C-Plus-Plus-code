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
	cout << endl;


	int* heapPtr = new int;  // nameless variable
	*heapPtr = 7;
	cout << heapPtr << "  " << &heapPtr << "  " << *heapPtr << endl;
	cout << endl;

	int* heapPtrArray = new int[4];  // nameless array; brackets need a number here
	heapPtrArray[0] = -1;
	heapPtrArray[1] = -4;
	heapPtrArray[2] = 5;
	heapPtrArray[3] = 7;
	cout << heapPtrArray[2] << endl;
	heapPtrArray[2] = -50;
	cout << heapPtrArray[2] << endl;

	heapPtrArray[0] = heapPtrArray[1] + heapPtrArray[2] * 2;
	cout << heapPtrArray[0] << endl;

	delete heapPtr;
	delete[] heapPtrArray;  // leave brackets empty here


	




}