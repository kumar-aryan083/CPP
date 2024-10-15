#include<iostream>
using namespace std;

//funtion prototype:-
// type function-name(arguments)

// int sum(int a,b); // Not Acceptable
// int sum(int a, int b); //Acceptable
int sum(int,int); // Acceptable
// void greet(void); //Acceptable
void greet(); //Acceptable


int main(){
    int a, b;
    cin>>a>>b;
    // a and b are actual parameters
    cout<<sum(a,b)<<endl;
    greet();
    return 0;
}

int sum(int a, int b){
    // here a and b are formal parameters which are taking values from actual parameters
    int c = a+b;
    return c;
}

void greet(){
    cout<<"Hello, Good Morning"<<endl;
}