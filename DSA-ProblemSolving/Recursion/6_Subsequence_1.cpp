#include<bits/stdc++.h>
using namespace std;

//Print all Subsequence of an array using Recursion.
void subsequence(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it : ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    // Take or Pick the particular index into the subsequence
    ds.push_back(arr[ind]);
    subsequence(ind+1,ds, arr,n);
    // not take, or not pick condition. This element will not be added to your subsequence
    ds.pop_back();
    subsequence(ind+1,ds, arr,n);
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ds;
    subsequence(0,ds, arr,n);
}