#include <iostream>
#include <algorithm>
using namespace std;

void linearSearch(int arr[], int n, int target){
    int flag = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            cout<<"Element found at index "<<i<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout<<"Element not found in this array."<<endl;
    }
}

int main(){
    int arr[] = {2, 1, 33, 21, 43, 54, 83, 65};
    linearSearch(arr, 8, 21);
    return 0;
}