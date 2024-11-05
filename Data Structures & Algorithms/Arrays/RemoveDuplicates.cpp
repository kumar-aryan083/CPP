#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    int j=1;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[i-1]){
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}

int main(){
    int arr[] = {1, 2, 34, 34, 334, 334, 11123, 1231111};
    int n= removeDuplicates(arr, 8);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}