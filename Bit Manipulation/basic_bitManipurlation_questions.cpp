#include<bits/stdc++.h>
using namespace std;

int main(){
    // Problem 1 --> Given an integer N print XOR of all no. in range (1 - N)
        // int n; cin>>n;
        // if(n%4 == 0) cout<<n<<endl;
        // if(n%4 == 1) cout<<1<<endl;
        // if(n%4 == 2) cout<<n+1<<endl;
        // if(n%4 == 3) cout<<0<<endl;

    // Problem 2 --> Given a range (L - R) print XOR(L^L+1^L+2^......R-1^R)
        // int l, r; cin>>l>>r;
        // int XOR_L = 0;
        // if(l-1%4 == 0) XOR_L = l-1;
        // else if(l-1%4 == 1) XOR_L = 1;
        // else if(l-1%4 == 2) XOR_L = (l-1)+1;
        // else if(l-1%4 == 3) XOR_L = 0;
        // int XOR_R = 0;
        // if(r%4 == 0) XOR_R = r;
        // else if(r%4 == 1) XOR_R = 1;
        // else if(r%4 == 2) XOR_R = r+1;
        // else if(r%4 == 3) XOR_R = 0;
        // int ans = XOR_L ^ XOR_R;
        // cout<<ans<<endl;

    // Problem 3 --> Given n integers, every integers appears twice except 2 integers find those 2 integers without using any extra space

        // int arr[8] = {1, 2, 3, 4, 2, 1, 3, 6};
        // int XOR = 0;
        // for(int i=0; i<8; i++){
        //     XOR = XOR^arr[i];
        // }
        // int cnt = 0;
        // while(XOR){
        //     if(XOR&1){
        //         break;
        //     }
        //     cnt++;
        //     XOR = XOR>>1;
        // }
        // int xor1 = 0, xor2 = 0;
        // for(int i=0; i<8; i++){
        //     if(arr[i]&(1<<cnt)){
        //         xor1 = xor1^arr[i];
        //     }else{
        //         xor2 = xor2^arr[i];
        //     }
        // }
        // cout<<xor1<<" "<<xor2<<endl;

    // Problem 4 --> Generate all the subsets of an array (Power set algorithm)
    
        int arr[3] = {3,2,4};
        vector<vector<int>> ans;
        for(int i=0; i<(1<<3); i++){
            vector<int> ds;
            for(int j = 0; j<3; j++){
                if(i&(1<<j)){
                    cout<<arr[j]<<" ";
                }
            }
            cout<<endl;
        }
        
    return 0;
}