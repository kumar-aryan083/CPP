// Large Exponentiation

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int Mod = 1e9+7;

// multiplication of large numbers using bit multiplication T.C of O(log b)
int binMultiply(ll a, ll b){
    int ans = 0;
    while(b>0){
        if(b&1){
            ans = (ans + a)%Mod;
        }
        a=(a + a)%Mod;
        b>>=1;
    }
    return ans;
}

// iterative binary exponentiation for a^b in T.C of O(log b)
int binExpIter(ll a, ll b){
    int ans = 1;
    while(b>0){
        if(b&1){
            ans = binMultiply(ans,a)%Mod;
        }
        a = binMultiply(a,a)%Mod;
        b>>=1;
    }
    return ans;
}

int main(){
    int a = 2, b = 13;
    cout<<binExpIter(a,b)<<endl;
    cout<<binMultiply(a,b)<<endl;
}