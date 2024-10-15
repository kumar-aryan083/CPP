#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
const int N = 1e3+10;
int hsh[N];
int pf[N][N];

int main(){
    IOS;
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
                cin>>arr[i][j];
                pf[i][j]=arr[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
    }
    int q;
    cin>>q; 
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d]-pf[c][b-1]-pf[a-1][d]+pf[a-1][b-1]<<endl;
    }
}