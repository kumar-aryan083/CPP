#include<bits/stdc++.h>
using namespace std;

int singleNumber(int arr[], int n){
    int xorr = 0;
    for(int i=0; i<n; i++) xorr ^= arr[i];
    return xorr;
}

int main(){
    int arr[] = {4, 1, 2, 1, 2};
    cout<<singleNumber(arr, 5)<<endl;
    return 0;
}