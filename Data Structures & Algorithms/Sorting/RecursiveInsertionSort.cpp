#include <iostream>
#include <algorithm>
using namespace std;

void recursive_insertion_sort(int arr[], int n, int i){
    if(i == n) return;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1], arr[j]);
        j--;
    }
    recursive_insertion_sort(arr, n, i+1);
}

int main(){
    int arr[] = {12, 5, 8, 2, 4, 10};
    recursive_insertion_sort(arr, 6, 0);
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}