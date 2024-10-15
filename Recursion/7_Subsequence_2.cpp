#include <bits/stdc++.h>
using namespace std;

//Print all the Subsequences of an array whose sum is equal to k.
void printS(int ind, vector<int> &ds,int k, int s, int arr[], int n){
    if(ind == n){
        if(s == k){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //Pick
    ds.push_back(arr[ind]);
    s+=arr[ind];
    printS(ind+1,ds,k,s, arr,n);

    s-=arr[ind];
    ds.pop_back();
    //Not Pick
    printS(ind+1,ds,k,s, arr,n);
}

//Print only one Subsequence of an array whose sum is equal to k.
bool printS1(int ind, vector<int> &ds, int k, int sum, int arr[], int n){
    if(ind == n){
        if(sum == k){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        return false;
    }
    
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    if(printS1(ind+1, ds, k, sum, arr, n) == true){
        return true;
    }

    ds.pop_back();
    sum-=arr[ind];
    if(printS1(ind+1, ds, k, sum,arr,n) == true){
        return true;
    }
   return false;
}

// Fuction to count the number of subsequences in an array which has a sum of k.
int count_sub(int ind, int k, int sum, int arr[],int n){
    if(ind == n){
        if(sum == k) return 1;
        else return 0;
    }
    sum+=arr[ind];
    int l = count_sub(ind+1, k, sum, arr,n);
    sum-=arr[ind];
    int r = count_sub(ind+1, k, sum, arr,n);
    return l + r;
}

int main(){
    int arr []={1,2,1};
    int n = 3;
    int k = 2;
    vector<int> ds;
    // printS(0,ds,k, 0, arr,n);
    // printS1(0,ds,k,0,arr,n);
    cout<<count_sub(0, k, 0, arr, n)<<endl;
}