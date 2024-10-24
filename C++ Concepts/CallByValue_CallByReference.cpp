#include<iostream>
using namespace std;

// Call by value using accepts the parameters as a copy
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// Call by reference using pointer
void swapPointer(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using C++ reference variables
void swapReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<"Before Swapping: "<<a<<" "<<b<<endl;
    // swap(a,b);
    // swapPointer(&a,&b);
    swapReference(a,b);
    cout<<"After Swapping: "<<a<<" "<<b<<endl;
    return 0;
}