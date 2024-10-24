#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setData(void){
            salary = 15000;
            cout<<"Enter the id: ";
            cin>>id;
        }
        void getData(void){
            cout<<"Your id is: "<<id<<endl;
        }
};

int main(){
    Employee emp[4];
    for(int i=0; i<4; i++){
        emp[i].setData();
    }
    for(int i=0; i<4; i++){
        emp[i].getData();
    }
    return 0;
}
