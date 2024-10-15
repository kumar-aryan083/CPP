#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
const int N = 1e7+10;
int hsh[N];
int pf[N];

int main(){
    IOS;
    int n;
    cin>>n;
    set<int> s;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    auto it = s.lower_bound(5);
    if(it==s.end()){
        cout<<"Lower Bound does not exist for this Set."<<endl;
    }else{
        cout<<(*it)<<endl;
    }
    auto it = s.upper_bound(5);
    if(it==s.end()){
        cout<<"Upper Bound does not exist for this Set."<<endl;
    }else{
        cout<<(*it)<<endl;
    }


    // vector<int> v;
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // sort(v.begin(),v.end());
    // auto it = lower_bound(v.begin(),v.end(),5);
    // if(it==v.end()){
    //     cout<<"Lower Bound does not exist for this vector."<<endl;
    // }else{
    //     cout<<"Lower bound of this array is "<<(*it)<<endl;
    // }
    // auto it = upper_bound(v.begin(),v.end(),5);
    // if(it==v.end()){
    //     cout<<"Upper Bound does not exist for this vector."<<endl;
    // }else{
    //     cout<<"Upper bound of this array is "<<(*it)<<endl;
    // }

    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }   
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // sort(arr,arr+n);
    // int *ptr = lower_bound(arr,arr+n,5);
    // if(ptr==(arr+n)){
    //     cout<<"Lower Bound does not exist for this array."<<endl;
    // }else{
    //     cout<<"Lower bound of this array is "<<(*ptr)<<endl;
    // }
    // int *ptr2 = upper_bound(arr,arr+n,5);
    // if(ptr2==arr+n){
    //     cout<<"Upper Bound does not exist for this array."<<endl;
    // }else{
    //     cout<<"Upper bound of this array is "<<(*ptr2)<<endl;
    // }
}