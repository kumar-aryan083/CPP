#include <iostream>
#include <limits.h>
using namespace std;

int SecondLargestElement(int arr[], int n){
    int largest = INT_MIN, secondLargest = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest && arr[i]>secondLargest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int arr[] = {2, 1, 33, 21, 43, 54, 83, 65};
    cout<<SecondLargestElement(arr, 8);
    return 0;
}