#include <iostream>
#include <algorithm>
using namespace std;

void leftRotateByK(int arr[], int n, int k){
    reverse(arr, arr+n);
    reverse(arr, arr+n-k);
    reverse(arr+n-k, arr+n);
}

int main(){
    int arr[] = {2, 1, 33, 21, 43, 54, 83, 65};
    leftRotateByK(arr, 8, 3);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}