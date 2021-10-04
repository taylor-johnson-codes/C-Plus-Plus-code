#include <iostream>
using namespace std;

class ExampleClass  // capitalize
{
// public and private can have static and instance members
public:  // global variables and functions
    // static means no matter how many objects of the class are created, there is only one copy of the static member
    static int var1;  // a static global can only be declared here; initialized under this class block
    
    static void fun1() {  // static functions must be defined here
        cout << "This is from static fun1.\n";
    }

    // instance members will be accessed after an instance is created
    int var2 = 4;  // initializing here is an option
    double var3;  // instance members can be initialized by a constructor
    int var4;
    int var5;
    double var6;

    void fun2() {  // defining function here is an option
        cout << "This is from instance fun2 inside of the class.\n";
    }

    void fun3();

    // Two special optional methods (functions within a class) are constructor and destructor 
    // Constructor(s) create an instance of the class and can have two options: with or without parameter(s)
    ExampleClass();
    ExampleClass(int param1);
    ExampleClass(int param1, double param2);
    
    // Destructor - optional to type because it's automatically executed in the background
    // Responsible for cleaning up after program the runs, i.e. release unused memory
    ~ExampleClass();

private:
// members here can only be accessed within this class


};  // semicolon

// initilizing static global variable (can't be initialized within the class)
int ExampleClass::var1 = 6;

void ExampleClass::fun3() {
    cout << "This is from instance fun3 outside of the class.\n";
}

// Three constructor examples:
ExampleClass::ExampleClass() {
    var3 = 3.14;
    cout << "ExampleClass() has run.\n";
}

ExampleClass::ExampleClass(int param1) {
    var4 = param1;  // initializing var4 from within the class to the value of the input parameter
}

ExampleClass::ExampleClass(int param1, double param2) {
    var5 = param1;
    var6 = param2;
}

ExampleClass::~ExampleClass() {
    // shouldn't have any operations here
    cout << "This is the destructor.\n";
}


int main()
{
    cout << "Hello World" << endl;
}