#include<bits/stdc++.h>
using namespace std;

//Nesting of Vector

void printvec(vector<pair<int, int>> vp){
  for(int i=0; i<vp.size(); i++){
    cout<<vp[i].first<<" "<<vp[i].second<<endl;
  }
}

void printvec2(vector<int> vp){
  for(int i=0; i<vp.size(); i++){
    cout<<vp[i]<<" ";
  }
  cout<<endl;
}

int main(){
  // Vector of Pair

  // vector<pair<int, int>> v ={{1,2},{2,3},{3,4}};
  // printvec(v);
  // int n;
  // cin>>n;
  // vector<pair<int,int>> v;
  // for(int i=0; i<n; i++){
  //   int x, y;
  //   cin>>x>>y;
  //   v.push_back(make_pair(x,y));
  // }
  // printvec(v);
  // swap(v[0],v[2]);
  // cout<<endl;
  // printvec(v);
  // --------------------------------------------------
  // Array of Vector 

  // vector<int> v[10];
  // int N;
  // cin>>N;
  // for(int i=0; i<N; i++){
  //   int n; 
  //   cin>>n;
  //   for(int j=0; j<n; j++){
  //     int x; 
  //     cin>>x;
  //     v[i].push_back(x);
  //   }
  // }
  // for(int i=0; i<N; i++){
  //   printvec2(v[i]);
  // }
  // cout<<endl;

  // ----------------------------------------------------
  // Vector of Vector

  // vector<vector<int>> v;
  // int N;
  // cin>>N;
  // for(int i=0; i<N; i++){
  //   int n;
  //   cin>>n;
  //   vector<int> temp;
  //   for(int j=0; j<n; j++){
  //     int x; 
  //     cin>>x;
  //     temp.push_back(x);
  //   }
  //   v.push_back(temp);
  // }
  // for(int i=0; i<N; i++){
  //   printvec2(v[i]);
  // }
}