//Checking whether a number is prime or not in O(sqrt(n)) Time Complexity.
//--------------------------------------------------------------------------
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    for(int i = 2; i<=sqrt(n); i++){
        if(n%i == 0){
            cout<<"NOT PRIME : It is divisible by "<<i<<endl;
            return 0;
        }
    }
    cout<<"PRIME"<<endl;
}