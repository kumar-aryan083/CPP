#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort(int arr[], int n){
    int didSwap = 0;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) return;
    }
}

int main(){
    int arr[] = {12, 5, 8, 2, 4, 10};
    bubble_sort(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}