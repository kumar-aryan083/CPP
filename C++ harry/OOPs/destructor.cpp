#include<iostream>
using namespace std;

// A destructor is a type of function which is called when the object is destroyed. Destructor never takes an argument nor does it return any value. An example program to demonstrate the concept of destructors in C++ is shown below.
// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }
        // destructor of the “num” class is defined. The destructor prints the value of the variable “count” and decrement in the value of “count”. The main thing to note here is that every time the object has been destroyed this destructor will run.
        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    // inside the block two objects “n2” and “n3” are created of the “num” data type. The main things to note here are that when the objects “n2” and “n3” are created the constructor will run for both objects and when the block ends the destructor will run for both objects “n2” and “n3”.
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    // when the program ends the destructor for the object “n1” will run.
    cout<<"Back to main"<<endl;
    return 0;
}
