//Prefix Sum Concept
//---------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

vector<int> prefixSum(int arr[]){
    int n = 4;
    vector<int> prefix(n+1,0);
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;
}

int main(){
    int arr[] = { 10, 4, 16, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> prefix = prefixSum(arr);
    for (int i = 0; i < n; i++)
        cout << prefix[i] << " ";
}