#include<iostream>
using namespace std;

class Employee{
    // By default all the members of a class is private but we can specify it by private: keyword
    private:
    int emp_salary;
    // We have to use public: keyword for the functions we want to be accessed outside the class
    public:
    int emp_id;
    string emp_name;    
    // Creting a setter for the private members
    void setData(int a); // Declaration 
    // Creating a getter for the private members
    void getData(){
        cout<<emp_salary<<endl;
    };
};

// Definition: We can define our member function outside the class if we have declared it inside the class already
void Employee :: setData(int a){ // Defining member function using scope resolution operater
    emp_salary = a;
}

int main(){
    // Creating an object of class Employee
    Employee piyush;
    // Assigning values to the public members of the class piyush for the object piyush
    piyush.emp_id = 1;
    piyush.emp_name = "Piyush pandey";
    piyush.setData(250000); // Since emp_salary is a private member of the class therefore we cannot assign values to it directly

    // Getting values of the public members of this class
    cout<<piyush.emp_id<<endl;
    cout<<piyush.emp_name<<endl;
    // Getting values of the private members of this class
    piyush.getData();
    return 0;
}