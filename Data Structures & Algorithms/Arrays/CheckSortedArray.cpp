#include <iostream>
#include <limits.h>
using namespace std;

bool check(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
}

int main(){
    // int arr[] = {2, 1, 33, 21, 43, 54, 83, 65};
    int arr[] = {1, 2, 4, 34, 334, 1111, 11123, 1231111};
    if(check(arr, 8)){
        cout<<"Sorted"<<endl;
    }else{
        cout<<"Not Sorted"<<endl;
    }
    return 0;
}