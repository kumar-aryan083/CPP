#include <bits/stdc++.h>
using namespace std;

// using map
/*
vector<int> findUnion(vector<int> arr1, vector<int> arr2){
    vector<int> arr;
    int n = arr1.size(), m = arr2.size();
    map<int, int> mp;
    for(int i=0; i<n; i++) mp[arr1[i]]++;
    for(int i=0; i<m; i++) mp[arr2[i]]++;
    for(auto &it: mp){
        arr.push_back(it.first);
    }
    return arr;
}
*/

// using set
/*
vector<int> findUnion(vector<int> arr1, vector<int> arr2){
    vector<int> arr;
    int n = arr1.size(), m = arr2.size();
    set<int> st;
    for(int i=0; i<n; i++) st.insert(arr1[i]);
    for(int i=0; i<m; i++) st.insert(arr2[i]);
    for(auto &it: st){
        arr.push_back(it);
    }
    return arr;
}
*/

// using 2 pointers
vector<int> findUnion(vector<int> arr1, vector<int> arr2){
    vector<int> arr;
    int n = arr1.size(), m = arr2.size();
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(arr.size() == 0 || arr.back()!=arr1[i]){
                arr.push_back(arr1[i]);
            }
            i++;
        }else{
            if(arr.size() == 0 || arr.back()!=arr2[j]){
                arr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(arr.back()!=arr1[i]){
            arr.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(arr.back()!=arr2[j]){
            arr.push_back(arr2[j]);
        }
        j++;
    }
    return arr;
}

int main(){
    vector<int> arr1 = {2, 3, 5, 20, 80, 100};
    vector<int> arr2 = {3, 3, 40, 60, 90, 110};
    vector<int> ans = findUnion(arr1, arr2);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}