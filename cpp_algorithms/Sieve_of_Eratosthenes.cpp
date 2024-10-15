//Sieve of Eratosthenes
// This algorithm is used to find all the prime numbers from 1 to n.
// Time Complexity --> O(n * log(log(n)))
//----------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std;

int N = 100;
bool sieve[101];
void createSieve(){
    fill(sieve, sieve+N, true);
    sieve[0] = sieve[1] = false;
    for(int i = 2; i*i<=N; i++){
        if(sieve[i]){
            for(int j = i*i; j<=N; j+=i){
                sieve[j] = false;
            }
        }
    }
}

int main(){
    createSieve();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(sieve[n] == true){
            cout<<"PRIME"<<endl;
        }else{
            cout<<"NOT PRIME"<<endl;
        }
    }
}