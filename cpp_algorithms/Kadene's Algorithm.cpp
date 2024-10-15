#include<bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
 

int maxSubarraySum(int arr[], int size)
{
     int max_sum = INT_MIN, current_sum = 0;
 
    for (int i = 0; i < size; i++)
    {
        current_sum = current_sum + arr[i];
        if (max_sum < current_sum)
            max_sum = current_sum;
 
        if (current_sum < 0)
            current_sum = 0;
    }
    return max_sum;
} 

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int result=maxSubarraySum(arr,n);
    cout<<result<<endl;
}