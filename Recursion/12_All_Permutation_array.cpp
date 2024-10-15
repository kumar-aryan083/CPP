#include<bits/stdc++.h>
using namespace std;

class Permutation{
    private:
    void findPermute(vector<int>& nums, vector<int>& ds, vector<vector<int>>&ans, int freq[]){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                findPermute(nums,ds,ans,freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
    public:
    vector<vector<int>> permute(vector<int>& nums){
        vector<int>ds;
        vector<vector<int>> ans;
        int freq[nums.size()] = {0};
        findPermute(nums, ds, ans, freq);
        return ans;
    }
};

int main(){

    return 0;
}