//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 12;
//	// int *aPointer = &a;
//	int* aPointer;
//	aPointer = &a;  // no star when initializing later with a variable address
//
//	/* Three ways to declare pointer variables:
//	string* mystring; // Preferred
//	string *mystring;
//	string * mystring;
//	*/
//
//	cout << "Value of a = " << a << endl;
//	cout << "Address of a = " << &a << endl;
//	cout << "Value of aPointer = " << aPointer << endl;
//	cout << "Address of aPointer = " << &aPointer << endl;
//	cout << "Printing *aPointer prints the value stored in that address: " << *aPointer << endl;
//	cout << endl;
//
//
//	int b = 10;
//	int c = 5;
//
//	b = c + *aPointer;  // b = 5 + 12
//	cout << b << endl;
//
//	b = c *(*aPointer);  // to use multiplication symbol, break apart with ()
//	cout << b << endl;
//	cout << endl;
//
//
//	*aPointer = 4;  // no star if reassigning to a variable address, if reassigning to a value a star is needed
//	cout << "Ran *aPointer = 4;" << endl;
//	cout << "Value of a = " << a << endl;
//	cout << "Address of a = " << &a << endl;
//	cout << "Value of aPointer = " << aPointer << endl;
//	cout << "Address of aPointer = " << &aPointer << endl;
//	cout << "Printing *aPointer prints the value stored in that address: " << *aPointer << endl;
//	cout << endl;
//
//
//	int* heapPtr = new int;  // nameless variable with a pointer
//	// "new" keyword allocates a memory address for an int and heapPtr points to that address
//	// heapPtr also gets its own memory address and the value there is the address for new int
//	*heapPtr = 7;  // inserting the value 7 into the empty int memory space
//	cout << heapPtr << "  " << &heapPtr << "  " << *heapPtr << endl;
//	cout << endl;
//
//	int* heapPtrArray = new int[4];  // nameless array; brackets need a number here
//	heapPtrArray[0] = -1;
//	heapPtrArray[1] = -4;
//	heapPtrArray[2] = 5;
//	heapPtrArray[3] = 7;
//	cout << heapPtrArray[2] << endl;
//	heapPtrArray[2] = -50;
//	cout << heapPtrArray[2] << endl;
//
//	heapPtrArray[0] = heapPtrArray[1] + heapPtrArray[2];
//	cout << heapPtrArray[0] << endl;
//	cout << endl;
//
//	// Heap pointers need to be explicitly deleted when they're no longer needed,
//	// otherwise the memory space stays occupied unnecessarily 
//	delete heapPtr;
//	delete[] heapPtrArray;  // leave brackets empty here
//
//	// Pass by reference (2 vars share the same location in memory)
//	int i = 56;
//	int &r = i;  // reference variable; needs to be initialized here
//	r = 4;
//	cout << &i << endl;
//	cout << &r << endl;
//	cout << i << endl;
//}