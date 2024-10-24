#include<iostream> 
using namespace std;

typedef struct employee{
    int eId;       //4
    string favCol; 
    double salary; //8
    // total sum of all the data is the memory allocated
} emp;

typedef union money{
    // It is used to access single data type at a time in a particular structure
    int rice;      // 4
    char cost;     // 2
    double weight; // 8
    // total of 8 bytes of memory is allocated
} mon;

int main(){
    //-------------------------------------------------------------
    // Enums:-
    //-------------------------------------------------------------
    enum dog{bark, cry, run, sit};
    dog d1 = run;
    cout<<d1<<endl;
    // cout<<bark<<endl;
    // cout<<cry<<endl;
    // cout<<run<<endl;
    // cout<<sit<<endl;

    //-------------------------------------------------------------
    // Unions:-
    //-------------------------------------------------------------
    // mon m1;
    // m1.rice = 45;
    // m1.weight = 25.8;
    // cout<<m1.rice<<endl;
    // cout<<m1.weight<<endl;

    // m1.cost = 4500000;
    // cout<<m1.cost<<endl;

    //-------------------------------------------------------------
    // Structures:-
    //-------------------------------------------------------------
    // struct employee piyush;
    // emp aryan;

    // piyush.eId = 1;
    // piyush.favCol = "Blue";
    // piyush.salary = 12000000;

    // aryan.eId = 2;
    // aryan.favCol = "Black";
    // aryan.salary = 150000;

    // cout<<piyush.eId<<endl;
    // cout<<piyush.favCol<<endl;
    // cout<<piyush.salary<<endl;

    // cout<<aryan.eId<<endl;
    // cout<<aryan.favCol<<endl;
    // cout<<aryan.salary<<endl;
}