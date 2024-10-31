#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minn = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minn]){
                minn = j;
            }
        }
        swap(arr[i], arr[minn]);
    }
}

int main(){
    int arr[] = {12, 5, 8, 2, 4, 10};
    selection_sort(arr, 6);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}