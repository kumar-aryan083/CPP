#include <iostream>
#include <algorithm>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){
    int arr[] = {12, 5, 8, 2, 4, 10};
    insertion_sort(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}