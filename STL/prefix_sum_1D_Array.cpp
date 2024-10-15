#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
const int N = 1e5+10;
int pf[N];

int main(){
    IOS;
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++){
        cin>>arr[i];
        pf[i]=pf[i-1]+arr[i];
    }
    int t;
    cin>>t; 
    while(t--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }
}