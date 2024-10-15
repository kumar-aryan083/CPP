//Author: aryan_005
//------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl   '\n'
#define ll     long long
#define ld     long double
#define TCs(x) ll x; cin>>x; while(x--)
#define TC(x)  ll x=1; while(x--)
#define pb     push_back
#define ppb    pop_back
#define mp     make_pair
#define all(v) v.begin(), v.end()

const int MOD = 1e9+7;
const int inf = 1e9;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

void solve() {
    int x; cin>>x;
    int ans = INT_MIN;
    for(int i=1; i<=x; i++){
        ans = max(ans, gcd(x, i)+i);
    }
    cout<<ans<<endl;
}

int main(){
    fastIO;
    TC(t){solve();}
}