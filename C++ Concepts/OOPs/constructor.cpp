// Constructors in C++

// A constructor is a special member function with the same name as the class. The constructor doesn’t have a return type. Constructors are used to initialize the objects of its class. Constructors are automatically invoked whenever an object is created.

// Important Characteristics of Constructors in C++

// A constructor should be declared in the public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have return types
// It can have default arguments
// We cannot refer to their address

#include <iostream> 
using namespace std;

class Student{
    int id;
    string name;
    int data1,data2,data3;
    public:
    void printData(){
        cout<<name<<" : "<<id<<endl;
    }
    //Default Constructor
    Student (void){
        id = 58;
        name = "Divya Prakash";
    }
    //Parameterised Constructor
    Student (int a, string str){
        id = a;
        name = str;
    }
//Constructor Overloading in C++

// Constructor overloading is a concept in which one class can have multiple constructors with different parameters. The main thing to note here is that the constructors will run according to the arguments for example if a program consists of 3 constructors with 0, 1, and 2 arguments, so if we pass 1 argument to the constructor the compiler will automatically run the constructor which is taking 1 argument

// Constructors with Default Arguments in C++
// Default arguments of the constructor are those which are provided in the constructor declaration. If the values are not provided when calling the constructor the constructor uses the default arguments automatically. An example program to demonstrate the concept default arguments in C++ is shown below.
    Student(int a = 45, int b = 18, int c = 7){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData2(){
        cout<<data1<<" and "<<data2<<" are the two data given."<<endl;
    }
};

int main(){
    Student DP(58, "Divya Prakash");
    DP.printData();
    // Student pandey;
    // DP.printData2();
    return 0;
}