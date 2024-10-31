#include<bits/stdc++.h>
using namespace std;

class Subsets2{
    private:
    void findSubSets(int ind, vector<int>& arr, vector<int>& ds, vector<vector<int>>&ans){
        ans.push_back(ds);
        for(int i = ind; i<arr.size(); i++){
            if(i!=ind && arr[i] == arr[i-1]) continue;
            ds.push_back(arr[i]);
            findSubSets(i+1, arr, ds, ans);
            ds.pop_back();
        }
    }
    public:
    vector<vector<int>> subSetsWithDup(vector<int>& nums){
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findSubSets(0, nums, ds, ans);
        return ans;
    }
};

int main(){
    
    return 0;
}