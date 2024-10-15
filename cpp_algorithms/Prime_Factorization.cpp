//Prime Factorization of a number in O(log n) per query.
//--------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std; 

const int N = 1000013;
int sieve[N+1];
void createSieve(){
    iota(sieve, sieve+N, 0);
    for(int i=2; i*i<=N; i++){
        if(sieve[i] == i){
            for(int j = i*i; j<=N; j+=i){
                if(sieve[j] = j){
                    sieve[j] = i;
                }
            }
        }
    }
}

int main(){
    createSieve();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        while(n!=1){
            cout<<sieve[n]<<" ";
            n/=sieve[n];
        }
    }
}