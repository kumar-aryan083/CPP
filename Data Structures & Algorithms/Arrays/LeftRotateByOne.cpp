#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}

int main(){
    int arr[] = {2, 1, 33, 21, 43, 54, 83, 65};
    leftRotateByOne(arr, 8);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}