#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
}

int main(){
  vector<int> v;
  int N;
  cin>>N;
  for(int i=0; i<N; i++){
    int n;
    cin>>n;
    v.push_back(n);
  }
  vector<int> &v1=v;
  v1.push_back(45);
  printvec(v1);
  cout<<endl;
  printvec(v);
  cout<<endl;
  v.pop_back();
  printvec(v);
}