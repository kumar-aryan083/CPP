#include <iostream>
#include <limits.h>
using namespace std;

int largestElement(int arr[], int n){
    int ans = INT_MIN;
    for(int i=0; i<n; i++){
        ans = max(arr[i], ans);
    }
    return ans;
}

int main(){
    int arr[] = {2, 1, 33, 21, 43, 54, 83, 65};
    cout<<largestElement(arr, 8);
    return 0;
}