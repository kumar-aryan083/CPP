#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n){
    int total = n*(n+1)/2;
    int sum = accumulate(arr, arr+n, 0);
    return total-sum;
}

int main(){
    int arr[] = {0, 1, 2, 4, 5};
    cout<<missingNumber(arr, 5)<<endl;
    return 0;
}