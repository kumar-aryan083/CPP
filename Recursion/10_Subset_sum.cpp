#include<bits/stdc++.h>
using namespace std;

class Solution{
public: 
    void func(int ind, vector<int>&arr,int sum,vector<int> sumSubset){
        if(ind == arr.size()){
            sumSubset.push_back(sum);
            return;
        }
        //Pick the element 
        func(ind+1, arr,sum+arr[ind], sumSubset);
        //Do not pick the element
        func(ind+1, arr, sum, sumSubset);
    }
public:
    vector<int> isSubsetSum(vector<int>arr, int sum){
        // code here 
        vector<int> sumSubset;
        func(0,arr,0,sumSubset);
        sort(sumSubset.begin(),sumSubset.end());
        return sumSubset;
    }
};
int main(){
    return 0;
}