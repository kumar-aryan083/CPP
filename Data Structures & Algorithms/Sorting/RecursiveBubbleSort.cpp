#include <iostream>
#include <algorithm>
using namespace std;

void recursive_bubble_sort(int arr[], int n){
    if(n <= 1) return;
    for(int j=0; j<=n-2; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    recursive_bubble_sort(arr, n-1);
}

int main(){
    int arr[] = {12, 5, 8, 2, 4, 10};
    recursive_bubble_sort(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}