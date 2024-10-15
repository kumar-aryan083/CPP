// Initialization list in Constructors in C++
// The initialization list in constructors is another concept of initializing the data members of the class. The syntax of the initialization list in constructors is shown below.

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

// A constructor is written first and then the initializations section is written
// In the initialization section, the data members are initialized
// To demonstrate the concept of Initialization list in Constructors an example program is shown below,
*/
#include<iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}