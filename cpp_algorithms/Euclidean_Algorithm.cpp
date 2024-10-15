#include<bits/stdc++.h>
using namespace std;

// Time Complexity --> O(log(min(a,b)))
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int a,b; cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}