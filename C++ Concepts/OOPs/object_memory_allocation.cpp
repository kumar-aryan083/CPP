// Objects Memory Allocation in C++
// The way memory is allocated to variables and functions of the class is different even though they both are from the same class.
// The memory is only allocated to the variables of the class when the object is created. The memory is not allocated to the variables when the class is declared. At the same time, single variables can have different values for different objects, so every object has an individual copy of all the variables of the class. But the memory is allocated to the function only once when the class is declared. So the objects don’t have individual copies of functions only one copy is shared among each object.

#include <iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(void){counter = 0;;};
    void setPrice(void);
    void getPrice(void);
};

void Shop :: setPrice(){
    cout<<"Enter Id of your item: "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item of id "<<itemId[counter]<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: getPrice(){
    for(int i=0; i<counter; i++){
        cout<<"Price of the item of id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    Shop pandey_ka_dhaba;
    pandey_ka_dhaba.initcounter();
    pandey_ka_dhaba.setPrice();
    pandey_ka_dhaba.setPrice();
    pandey_ka_dhaba.setPrice();
    pandey_ka_dhaba.getPrice();
    return 0;
}