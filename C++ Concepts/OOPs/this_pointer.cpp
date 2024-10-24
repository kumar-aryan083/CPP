// ‘this’ Pointer in C++
// “this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function. An example program is shown below to demonstrate the concept of “this” pointer.
#include<iostream>
using namespace std;
class A{
    int a;
    public:
        void setData(int a){
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
//1. We created a class “A”, which contains private data members “a”.
//2. The class “A” contains two member functions “setData” and “getData”
//3. The Function “setData” will take one parameters and assign the values of parameter to the private data members “a” using “this” pointer. As we know that one copy of member function is shared between all object. The use of “this” pointer helps to points to the object which invokes the member function.
//4. The Function “getData” will print the values of private data members “a”

int main(){
    A a;
    a.setData(4);
    a.getData();
    return 0;
}

