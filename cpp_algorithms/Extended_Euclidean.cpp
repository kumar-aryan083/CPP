//Extended Euclidean Algorithm
//------------------------------------------------------------------------
// Explanation :-
//------------------
// Since gcd(a,b) has the property :- ax+by = gcd(a,b) 
// ax+by = gcd(a,b)
// ax+by = gcd(b,a%b)
// ax+by = gcd(b,a-(a/b*b))
// After writing gcd(b,(a-a/b*b)) in terms of ax+by, we get
// ax+by = bx1 + (a - (a/b) * b)y1
// ax+by = bx1 + ay1 - (a/b * b)y1
// After taking b common from 1st and 3rd term we get
// ax+by = ay1 + b(x1 - (a/b) * y1)
// After rearranging this equation we get, 
// ax+by = ay1 + b(x1 - y1 * (a/b))
// therefore
// x = y1 and y = (x1 - y1 * (a/b))
//------------------------------------------------------------------------

#include<bits/stdc++.h>
using namespace std; 

int gcd(int a,int b,int &x,int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1,y1;
    int d = gcd(b,a%b,x1,y1);
    x = y1;
    y = x1-y1*(a/b);
    return d;
}

int main(){
    int a,b;
    cin>>a>>b;
    int x,y;
    cout<<gcd(a,b,x,y)<<endl;
    cout<<x<<" "<<y<<endl;
}