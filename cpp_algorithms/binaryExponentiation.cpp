// Binary Exponentiation
// It is used to find the power of any number. (a^b)
// pow function returns the double value, so for the large input its value is little inaccurate that's why we use binary exponentiation
// It works on the principle of divide and conqer

#include<bits/stdc++.h>
using namespace std;
#define int long long
const int Mod = 1e+7;

// Recursive
int binExpRecur(int a, int b){
    if(b == 0) return 1;
    int res = binExpRecur(a, b/2);
    if(b&1){
        return (a*(res *res)%Mod)%Mod;
    }else{
        return (res * res)%Mod;
    }
}
// Iterative
int binExpIter(int a, int b){
    int c = 1;
    while(b>0){
        if(b&1){
            c = (c*a)%Mod;
        }
        b>>=1;
        a=(a*a)%Mod;
    }
    return c;
}

int main(){
    int a = 2, b = 13;
    cout<<binExpRecur(a,b)<<endl;
    cout<<binExpIter(a,b)<<endl;
}