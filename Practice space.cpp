#include <iostream>
#include "Header.h"  // for thePiExample variable
#include <String>  // needed to use string data type
using namespace std;

void funA();
void funB(int a, int b);
int funC();
int funD(int a, int b);  // these are "formal parameters"; when num1 & num2 are used below, they are "actual parameters"
void funE(int a, int b, int c = 1000);  // c is a default argument; place the value here only
int funF(int &a, int b);  // pass by reference/value example

//void funAA() {
//    cout << "Hello ";
//}
//void funBB() {
//    cout << "world!\n";
//}

// the main function has to be below all other functions UNLESS
// void funA();
// is declared before the main function, then funA can be below main

int main()  
{
    //funAA();
    //funBB();

    int num1 = 30;
    int num2 = 50;
    funA();
    funB(5,10);
    funC();
    //funD(num1,num2);
    
    int returnExample = funD(num1, num2);
    cout << returnExample << endl;
    
    funE(1,2);  // the function's third parameter is there by default
    funE(1, 2, 500);  // can override the default value by inputting an argument in it's place

    int aa = 5;
    int bb = 9;
    int cc = funF(aa, bb);
    cout << "In main function, aa originally set to 5, now aa = " << aa << endl;
    cout << "In main function, bb originally set to 9, now bb = " << bb << endl;


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

    /*for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }*/

    /*int i = 0;
    while (i < 10) {
        cout << i << endl;
        i++;
    }*/

    /*int i = 0;
    do {
        cout << i << endl;
        i++;
    } while (i < 10);*/

    /*cout << "num  " << "num+1  " << "num+2" << endl;
    for (int i = 0; i < 10; i++){
        cout << i << "     " << i + 1 << "     " << i + 2 << endl;

    }*/

    /*cout << "num  " << "num+1  " << "num+2" << endl;
    int i = 0;
    while (i < 10) {
        cout << i << "     " << i + 1 << "     " << i + 2 << endl;
        i++;
    }*/

    /*cout << "num  " << "num+1  " << "num+2" << endl;
    int i = 0;
    do
    {
        cout << i << "     " << i + 1 << "     " << i + 2 << endl;
        i++;
    } while (i < 10);*/

    //cout << "num  " << "num+1  " << "num+2" << endl;
    //for (int i = 0; i < 10; i++){
    //    if (i == 4){
    //        continue;  // skips the iteration for 4 completely
    //        //break;  // breaks out of loop completely and moves on with program
    //    }
    //    cout << i << "     " << i + 1 << "     " << i + 2 << endl;
    //}

    //for (int i = 0; i < 5; i++)
    //{
    //    for (int j = 0; j < 2; j++)
    //    {
    //        cout << "i=" << i << "    " << "j=" << j << endl;
    //        if (j==0)
    //        {
    //            //continue;
    //            break;  // will break out of nested loop only; original loop will keep looping
    //        }
    //        cout << "hello" << endl;
    //    }
    //}
}

void funA() {
    cout << "funA results:\n";
    cout << "Hello world\n";
}

void funB(int a, int b) {
    cout << "funB results:\n";
    cout << "a + b = " << (a + b) << endl;
}

int funC() {
    int a = 8;
    int b = 3;
    int sum = (a + b);
    cout << "funC results:\n";
    cout << "a + b = " << sum << endl; 
    return sum;
}

int funD(int a, int b) {
    int sum = 0;
    sum = a + b;
    cout << "funD results:\n";
    cout << "a + b = " << sum << endl;
    return sum;
}

void funE(int a, int b, int c) {  // c is a default argument; it's value is stated at the top of the program where the function is declared
    int sum = (a + b + c);
    cout << "funE results:\n";
    cout << "a + b + c = " << sum << endl;
}

int funF(int &a, int b) {
    a = a + 2;
    b = b - 3;
    int sum = (a + b);
    cout << "In funF function, passed in a=5, b=9\n";
    cout << "a = a+2\n";
    cout << "b = b-3\n";
    cout << "a = " << a << " b = " << b << endl;
    return sum;

    // pass by reference: value is only in one space in memory so if that space's value changes, anything that points to it will show that current value
    // pass by value: a value stored in one place in memory is copied to a second space in memory so if the value of the second space changes, it doesn't impact the value in the first space
}