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

void printBinary(int num){
    for(int i=10; i>=0; i--){
        cout<<( (num>>i) & 1);
    }
    cout<<endl;
}

int main(){
    IOS;
    int a=9;
    int i=1;
    printBinary(a);
    // Checking whether index is set or not 
    if((a & (1<<i))!=0){
        cout<<"index is Set."<<endl;
    }else{
        cout<<"index is not Set."<<endl;
    }
    // Bit Set 
    printBinary((a | (1<<i)));
    // Bit Unset 
    printBinary(( a & ~(1<<i)));
    // Toggle
    printBinary(( a ^ (1<<i)));
    // Bit Count 
    int count=0;
    for(int i=31; i>=0; i--){
        if((a&(1<<i))!=0){
            count++;
        }
    }
    cout<<count<<endl;
    cout<<__builtin_popcount(a)<<endl;
}