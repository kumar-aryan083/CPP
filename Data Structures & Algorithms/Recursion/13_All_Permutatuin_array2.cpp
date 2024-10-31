#include<bits/stdc++.h>
using namespace std;

class AllPermution{
    private:
    void findPermute(int ind, vector<int>& nums, vector<vector<int>>&ans){
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=ind; i<nums.size(); i++){
            swap(nums[ind],nums[i]);
            findPermute(ind+1, nums, ans);
            swap(nums[ind],nums[i]);
        }
    }
    public:
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>> ans;
        findPermute(0, nums, ans);
        return ans;
    }
};

int main(){

    return 0;
}