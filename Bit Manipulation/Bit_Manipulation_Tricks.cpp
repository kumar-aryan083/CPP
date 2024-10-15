#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
 
int main(){
    //Properties
    // Given (N, i) - Check whether the ith bit of N is set or not
    int n, i; cin>>n>>i;
    if((n<<i)&(n) == 0){
        cout<<"NOT SET"<<endl;
    }else{
        cout<<"SET"<<endl;
    }

    // Clear the ith bit whether 0 or 1
    cout<<(~(1<<i)&n)<<endl;

    //Checking whether a number is even or odd.
    if((n&1)==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"Odd"<<endl;
    }

    // Remove the last set bit
    int ans = (n)&(n-1);
    cout<<ans<<endl;


    //Divide and Multiply by 2
    cout<<(n>>1)<<endl;   // Divide by 2
    cout<<(n<<1)<<endl;   // Multiply by 2

    //UpperCase to Lowercase
    char A = 'A';
    char a = A | (1<<5);
    cout<<a<<endl;
         //OR
    char B = 'B';
    char b = B | ' ';
    cout<<b<<endl;

    //LowerCase to Uppercase
    char c = 'c';
    char C = c & (~(1<<5));
    cout<<C<<endl;
         //OR
    char d = 'd';
    char D = d & '_';
    cout<<D<<endl;
    //Check whether a number is a power of 2 or not.
    int f = 24;
    if(f & (f-1)!=0){
        cout<<"Not a power of 2"<<endl;
    }else{
        cout<<"Power of 2"<<endl;
    }
}