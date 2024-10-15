#include<bits/stdc++.h>
using namespace std;

void findCombinations(int ind, int target, int arr[],vector<vector<int>> ans, vector<int> ds ){
    if(ind == 4){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target){
        //Pick element
        ds.push_back(arr[ind]);
        findCombinations(ind, target-arr[ind], arr, ans, ds);
        ds.pop_back();
    }else{
        //Not pick element
        findCombinations(ind+1, target, arr, ans, ds);
    }
    return;
}

int main(){
    int arr[]= {2, 3, 1, 7};
    vector<vector<int>> ans;
    vector<int> ds;
    int target = 5;
    findCombinations(0,target, arr, ans, ds);
    
}