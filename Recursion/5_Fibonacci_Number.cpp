#include<bits/stdc++.h>
using namespace std;

//Fibonacci Number
int func(int n){
    if(n<=1) return n;
    int first = func(n-1);
    int last = func(n-2);
    return first + last;
}

int main(){
    int n; cin>>n;
    int ans = func(n);
    cout<<ans<<endl;
}