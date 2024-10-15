#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
 
int main(){
    /*
    XOR
    1 0 -->1
    0 1 -->1
    0 0 -->0
    1 1 -->0
    */

   //Swap two numbers.
   int a = 4,b =6;
   a = a ^ b;
   b = b ^ a;
   // b = b ^ (a ^ b) ==> b ^ b ^ a ==> 0 ^ a ==> a
   a = a ^ b;
   // a = (a ^ b) ^ a ==> a ^ a ^ b ==> 0 ^ b ==> b

   cout<<a<<" "<<b<<endl;


   /***
    Given an array a of n integers. All integers are present in even count except one.
    Find that one integer that have odd count in O(n) time complexity and O(1) space.
    N < 10^5
    a[i] < 10^5
    ***/
   int n; cin>>n; 
   int ans = 0;
   for(int i = 0; i<n; i++){
       int x; cin>>x;
       ans ^= x;
   }
   cout<<ans<<endl;
}