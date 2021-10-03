#include <iostream>
using namespace std;

class ExampleClass  // capitalize
{
// public and private can have static and instance members
public:  // global variables and functions
    // static means no matter how many objects of the class are created, there is only one copy of the static member
    static int var1;  // a static global can only be declared here, not initialized
    
    static void fun1() {  // static functions must be defined here
        cout << "This is from static fun1.\n";
    }

    // instance members will be accessed after an instance is created
    int var2 = 4;  // initializing here is an option
    double var3;

    void fun2() {  // defining function here is an option
        cout << "This is from instance fun2.\n";
    }

    //void fun3();  // will be defined later

    // Two special optional methods (functions within a class) are constructor and destructor 
    // Constructor(s) create an instance of the class and can have two options: with or without parameter(s)
    ExampleClass();
    ExampleClass(int var4);
    ExampleClass(int var4, double var5);
    
    // Destructor - optional to type because it's automatically executed in the background
    // Responsible for cleaning up after program the runs, i.e. release unused memory
    ~ExampleClass();


private:
// members here can only be accessed within this class


};  // semicolon



int main()
{
    cout << "Hello World" << endl;
}