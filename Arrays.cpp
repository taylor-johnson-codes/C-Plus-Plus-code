#include <iostream>
using namespace std;

int main()
{
    
    int grade1[5];
    int length1 = sizeof(grade1) / sizeof(grade1[0]);
    cout << "Number of elements in the array: " << length1 << endl;

    int sizeOfArrInBytes = sizeof(grade1);
    cout << "Size of the array in bytes: " << sizeOfArrInBytes << endl;
    int sizeOfAnElementInBytes = sizeof(grade1[0]);
    cout << "Size of one element in bytes: " << sizeOfAnElementInBytes << endl;

    cout << "Initializing the array:" << endl;
    for (int i = 0; i < length1; i++)
    {
        grade1[i] = -1;
        cout << grade1[i] << endl;
    }

    cout << "Issue in C++:" << endl;
    cout << grade1[30] << endl; // doesn't produce an error when running the program
    
    int grade2[] = { -1, -1, -1 };  // can leave [] empty if fully populating here
    int length2 = sizeof(grade2) / sizeof(grade2[0]);
    cout << "Number of elements in the array: " << length2 << endl;

    int grade3[10] = { -1, -1, -1 };  // size of 10 with only 3 initialized
    int length3 = sizeof(grade3) / sizeof(grade3[0]);
    cout << "Number of elements in the array: " << length3 << endl;
    for (int i = 0; i < length3; i++)
    {
        cout << grade3[i] << endl;  // prints 0s for uninitialized elements which aren't valid values
    }
}