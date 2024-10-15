// Static Data Members in C++
// When a static data member is created, there is only a single copy of the data member which is shared between all the objects of the class. As we have discussed in our previous lecture that if the data members are not static then every object has an individual copy of the data member and it is not shared.

// Static Methods in C++
// When a static method is created, they become independent of any object and class. Static methods can only access static data members and static methods. Static methods can only be accessed using the scope resolution operator. An example program is shown below to demonstrate static data members and static methods in C++.

#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setData(void){
        cout<<"Enter the id: "<<endl;
        cin>>id;
        count+=1;
    }
    void getData(void){
        cout<<"Your Id of this employee is: "<<id<<" and Your count is: "<<count<<endl;
    }
    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"Total entries: "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee ::count;

int main(){
    Employee emp1;
    emp1.setData();
    emp1.getData();
    emp1.getCount();

    emp1.setData();
    emp1.getData();
    emp1.getCount();

    emp1.setData();
    emp1.getData();
    emp1.getCount();

    return 0;
}