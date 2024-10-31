#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low, right = mid+1; 
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(int arr[], int low, int high){
    if(low>=high) return;
    int mid = low+(high-low)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    int arr[] = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    mergeSort(arr, 0, 8);
    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}