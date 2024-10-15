//Segmented Sieve
//This algorithm is used to find all the primes in the range [l,r] in optimized way.
//-------------------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int N = 1000000;
bool sieve[1000001];
void createSieve(){
    for(int i = 2; i<=N; i++){
        sieve[i]=true;
    }
    for(int i = 2; i*i<=N; i++){
        if(sieve[i] == true){
            for(int j = i*i; j<=N; j+=i){
                sieve[j] = false;
            }
        }
    }
}

vector<int> generatePrimes(int n){
    vector<int> ds;
    for(int i = 2; i<=n; i++){
        if(sieve[i] == true){
            ds.push_back(i);
        }
    }
    return ds;
}

int main(){
    createSieve();
    int l,r;
    cin>>l>>r;
    //Generate all primes till sqrt(r)
    vector<int> primes = generatePrimes(sqrt(r));
    //Create a dummy array of size r-l+1 and make all the index 1
    int dummy[r-l+1];
    for(int i = 0; i<=r-l+1; i++){
        dummy[i] = 1;
    }
    //Mark all multiples of primes in range [l,r]
    for(auto pr : primes){
        int firstMultiple = (l/pr)*pr;
        if(firstMultiple < l) firstMultiple += pr;
        for(int i = max(firstMultiple,pr*pr); i<=r; i+=pr){
            dummy[i-l] = 0;
        }
    }
    //Print the dummy array which stores all primes in range [l,r]
    for(int i = l; i<=r; i++){
        if(dummy[i-l]==1){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}