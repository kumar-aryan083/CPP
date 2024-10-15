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
    ll h,w; cin>>h>>w;
    ll A[h][w];
    ll B[w][h];
    for(int i=0; i<h; i++){
        for(int j=0; i<j; j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            B[i][j]=A[j][i];
        }
    }
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++){
            cout<<B[i][j]<<endl;
        }
    }
}