//Parameterised and Functional Recursion
// Problem - Sum of first n natural number
#include<bits/stdc++.h>
using namespace std;

//Parameterised Recursion
void sum(int i, int n){
    if(i<1){
        cout<<n<<endl;
        return;
    }
    sum(i-1,n+i);
}

//Functional Recursion
int func_sum(int n){
    if(n==0) return 0;
    return n+func_sum(n-1);
}

int main(){
    int n; cin>>n;
    // sum(n,0);
    int ans = func_sum(n);
    cout<<ans<<endl;
}