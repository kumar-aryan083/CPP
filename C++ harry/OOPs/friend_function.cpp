#include<iostream>
using namespace std;

class Complex{
    int a,b;
    friend Complex sumComplex(Complex o1, Complex o2);
    public:
    void setData(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printData(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setData((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setData(1, 4);
    c1.printData();

    c2.setData(5, 8);
    c2.printData();

    sum = sumComplex(c1, c2);
    sum.printData();
    return 0;
}
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/