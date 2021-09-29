#include <iostream>
using namespace std;

/*
 The main function has to be below all other functions UNLESS
 void funA();
 is declared before the main function, then funA can be below main
 */

/*
void funAA() {
    cout << "Hello ";
}
void funBB() {
    cout << "world!\n";
}
*/


void funA();
void funB(int a, int b);
int funC();
int funD(int a, int b);  // these are "formal parameters"; when num1 & num2 are used below, they are "actual parameters"
void funE(int a, int b, int c = 1000);  // c is a default argument; place the value here only
int funF(int &a, int b);  // pass by reference/value example


int main()
{
    /*
    funAA();
    funBB();
    */

    
    int num1 = 30;
    int num2 = 50;
    funA();
    funB(5, 10);
    funC();
    //funD(num1,num2);

    int returnExample = funD(num1, num2);
    cout << returnExample << endl;

    funE(1, 2);  // the function's third parameter is there by default
    funE(1, 2, 500);  // can override the default value by inputting an argument in it's place

    int aa = 5;
    int bb = 9;
    int cc = funF(aa, bb);
    cout << "In main function, aa originally set to 5, now aa = " << aa << endl;
    cout << "In main function, bb originally set to 9, now bb = " << bb << endl;
    
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

