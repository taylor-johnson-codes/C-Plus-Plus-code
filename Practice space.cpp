#include <iostream>
#include "Header.h"  // for thePiExample variable
#include <String>  // needed to use string data type
#include <cstring>
using namespace std;

//int main()  
//{
    //cout << thePiExample << endl;

    //system("pause"); 

    //int aNumber = 0;
    ////cout << "Enter a number:" << endl;
    //cout << "Enter a number:\n";
    //cin >> aNumber;
    //cout << "You entered " << aNumber << "!\n";

    //string aString = "";
    //cout << "Enter one word:\n";
    //cin >> aString;
    //cout << "You entered " << aString << "!\n";

    //string aSentence = "";
    //cout << "Enter a sentence:\n";
    //getline(cin, aSentence);
    //cout << "You entered " << aSentence << "!\n";

    //int a = 5;
    //++a;  // and a++ both print 6
    //cout << a;

    //int a = 0;
    //int b = 0;
    //a = 5;
    //b = a++;
    //cout << b << endl;  // prints 5 because b = a is first step, doesn't get to ++ step
    
    //int a = 0;
    //int b = 0;
    //a = 5;
    //b = ++a;
    //cout << b << endl;  // prints 6 because it executes both steps when it's in this order

    //int A = 60;
    //int B = 13;
    //int C = 0;
    //// using bitwise operands
    //C = A & B;
    //cout << "C=" << C << endl;

    //C = A | B;
    //cout << "C=" << C << endl;

    //C = A ^ B;
    //cout << "C=" << C << endl;

    

    /*
    int grade[5];
    int length = sizeof(grade) / sizeof(grade[0]);
    cout << "Number of elements in the array: " << length << endl;

    cout << "Initializing the array:" << endl;
    for (int i = 0; i < length; i++)
    {
        grade[i] = -1;
        cout << grade[i] << endl;
    }

    cout << "Issue in C++:" << endl;
    cout << grade[30] << endl; // doesn't tell us it doesn't exist
    */

    /*
    int grade[] = { -1, -1, -1 };  // can leave [] empty if fully populating here
    int length = sizeof(grade) / sizeof(grade[0]);
    cout << "Number of elements in the array: " << length << endl;
    */

    /*
    int grade[10] = { -1, -1, -1 };  // size of 10 with only 3 initialized
    int length = sizeof(grade) / sizeof(grade[0]);
    cout << "Number of elements in the array: " << length << endl;
    for (int i = 0; i < length; i++)
    {
        cout << grade[i] << endl;  // will print 0s for uninitialized elements
    }
    */

//}