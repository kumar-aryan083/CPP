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

// // Problem - 1 (Write your name 5 times.)
// void solve(int i, int n){
//     if(i>n) return;
//     cout<<"Aryan"<<endl;
//     solve(i+1,n);
// }

// // Problem - 2 (Print linearly from 1 to N.)
// void solve(int i, int n){
//     if(i>n) return;
//     cout<<i<<" ";
//     solve(i+1,n);
// }

// // Problem - 3 (Print linearly from N to 1.)
// void solve(int i, int n){
//     if(n<i) return;
//     cout<<n<<" ";
//     solve(i,n-1);
// }

// // Problem - 4 (Print linearly from 1 to N by Backtracking.)
// void solve(int i, int n){
//     if(i<1) return ;
//     solve(i-1,n);
//     cout<<i<<" ";
// }

// Problem - 5 (Print linearly from N to 1 by Backtracking.)
void solve(int i, int n){
    if(i<1) return ;
    cout<<i<<" ";
    solve(i-1,n);
}



int main(){
    fastIO;
    TC(t){ int n; cin>>n; solve(n,1);}
}