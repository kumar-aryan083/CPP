#include<bits/stdc++.h>
using namespace std;

// longest subarray length if array contains only positive elements
int LongestSubarrayLength1(int arr1[], int n, int k){
    int left = 0, right = 0, maxLen = 0, sum = arr1[0];
    while(right<n){
        while(left<=right && sum>k) {
            sum-=arr1[left];
            left++;
        }

        if(sum == k) maxLen = max(maxLen, right-left+1);

        right++;
        if(right<n){
            sum += arr1[right];
        }
    }
    return maxLen;
}
// longest subarray length if array contains both positive and negative elements
int LongestSubarrayLength2(int arr2[], int n, int k){
    map<int, int> mp;
    int sum = 0, maxLen = 0;
    for(int i=0; i<n; i++){
        sum+= arr2[i];
        if(sum == k) maxLen = max(maxLen, i+1);
        int rem = sum-k;
        if(mp.find(rem) != mp.end()){
            int len = i-mp[rem];
            maxLen = max(maxLen, len);
        }
        if(mp.find(sum) == mp.end()) mp[sum] = i;
    }
    return maxLen;
}

int main(){
    int arr1[] = {1, 4, 0, 1, 1, 1, 2, 5};
    int arr2[] = {2, -1, 2, -3, 4, 5, 6, -1};
    cout<<LongestSubarrayLength1(arr1, 8, 5)<<endl;
    cout<<LongestSubarrayLength2(arr2, 8, 6)<<endl;
    return 0;
}