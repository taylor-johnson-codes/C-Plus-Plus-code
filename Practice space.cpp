//#include <iostream>
//#include "Header.h"  // for thePiExample variable
//#include <string>  // needed for getline function
//using namespace std;
//
//int main()  
//{
//    cout << "Header file example:" << endl;
//    cout << thePiExample << endl;
//
//    cout << "Pause system example:" << endl;
//    system("pause"); 
//
//    int aNumber = 0;
//    //cout << "Enter a number:" << endl;
//    cout << "Enter a number:\n";
//    cin >> aNumber;
//    cout << "You entered " << aNumber << "!\n";
//
//    string aString = "";
//    cout << "Enter one word:\n";
//    cin >> aString;
//    cout << "You entered " << aString << "!\n";
//
//    string aSentence = "";
//    cout << "Enter a sentence:\n";
//    getline(cin, aSentence);
//    cout << "You entered " << aSentence << "!\n";
//
//
//    cout << "Increment operator examples:" << endl;
//    int a = 5;
//    ++a;  // and a++ both print 6
//    cout << a;
//
//    int aa = 0;
//    int bb = 0;
//    aa = 5;
//    bb = aa++;
//    cout << bb << endl;  // prints 5 because b = a is first step, doesn't get to ++ step
//    
//    int aaa = 0;
//    int bbb = 0;
//    aaa = 5;
//    bbb = ++aaa;
//    cout << bbb << endl;  // prints 6 because it executes both steps when it's in this order
//
//
//    cout << "Bitwise operands examples:" << endl;
//    int A = 60;
//    int B = 13;
//    int C = 0;
//    C = A & B;
//    cout << "C=" << C << endl;
//
//    C = A | B;
//    cout << "C=" << C << endl;
//
//    C = A ^ B;
//    cout << "C=" << C << endl;
//}