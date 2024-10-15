// Linear Diophantine Equation
//------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

int extendedGCD(int a, int b, int &x, int &y){
    if(b == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1,y1;
    int d = extendedGCD(b,a%b,x1,y1);
    x = y1;
    y = x1-y1*(a/b);
    return d;
}

bool findAnySolution(int a, int b, int c, int &x , int &y, int &g){
    if(c%g != 0){
        return false;
    }
    x = x * (c/g);
    y = y * (c/g);
    if(a == 0){
        x = -x;
    }
    if(b == 0){
        y = -y;
    }
    return true;
}

int main(){
    int a,b,c,g;
    cin>>a>>b>>c;
    int x,y;
    g = extendedGCD(a,b,x,y);
    bool ans = findAnySolution(a,b,c,x,y,g);
    if(ans){
        cout<<"GCD: "<<g<<endl;
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }else{
        cout<<"No Solution possible"<<endl;
    }

}