//Author: aryan_005
//------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
 
#define endl                    '\n'
#define fastIO                  ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll                      long long
#define ld                      long double
#define TCs(x)                  ll x; cin>>x; while(x--)
#define TC(x)                   ll x=1; while(x--)
#define pb                      push_back
#define mp                      make_pair
#define all(v)                  v.begin(), v.end()
#define Max(x,y,z)              max(x,max(y,z))
#define Min(x,y,z)              min(x,min(y,z))

int cnt = 0; 

void solve(){
    if(cnt==3) return;   //Base Condition
    cout<<cnt<<endl;
    cnt++;
    solve();             //Calling itself before
}

int main(){
    fastIO;
    TC(t){solve();}
}