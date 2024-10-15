#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr = new Complex;
    ptr->setData(1, 54);
    ptr->getData(); 

    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->setData(1, 4); 
    ptr1->getData();
    return 0;
}
// 1.We created a class “Complex”, which contains two private data members “real” and “imaginary”.
// 2.The class “complex” contains two member functions “getdata” and “setdata”
// 3.The Function “setdata” will take two parameters and assign the values of parameters to the private data members “real” and “imaginary”
// 4.The Function “getdata” will print the values of private data members “real” and “imaginary”
// 5.In the main program object is created dynamically by using the “new” keyword and its address is assigned to the pointer “ptr”
// 6.he member function “setdata” is called using the pointer “ptr” with the arrow operator “->” and the values “1, 54” are passed.
// 7.The member function “getdata” is called using the pointer “ptr” with the arrow operator “->” and it will print the values of data members.
// 8.Array of objects is created dynamically by using the “new” keyword and its address is assigned to the pointer “ptr1”
// 9.The member function “setdata” is called using the pointer “ptr1” with the arrow operator “->” and the values “1, 4” are passed.
// 10.The member function “getdata” is called using the pointer “ptr1” with the arrow operator “->” and it will print the values of data members.
// The main thing to note here is that we called the member function with pointers by using arrow operator “->” instead of the dot operator “.” but still it will give the same results.