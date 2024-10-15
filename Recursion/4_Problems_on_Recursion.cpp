// Problems on recursion
#include<bits/stdc++.h>
using namespace std;

//Problem - Reverse an Array using two Index
void reverse(int l,int r,int arr[]){
    if(l>=r) return; 
    swap(arr[l],arr[r]);
    reverse(l+1,r-1,arr);
}
//Problem - Reverse an Array using one Index
void reverse2(int i, int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse2(i+1,arr,n);
}
//Problem - Check whether a string is Palindrome or not
bool palindrome(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palindrome(i+1,s);
}

int main(){
    // int n; cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++) cin>>arr[i];
    // reverse(0,n-1,arr);
    // reverse2(0,arr,n);
    // for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    // cout<<endl;
    string s; cin>>s;
    bool ans = palindrome(0,s);
    if(ans) cout<<"It is a Palindrome"<<endl;
    else cout<<"It is not a Palindrome"<<endl;
}