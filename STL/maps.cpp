#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair

void print(map<int, string> m){
    cout<<m.size()<<endl;
    for(auto pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    IOS;
    map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="efg";
    m.insert(make_pair(4, "asd"));
    // map<int, string> :: iterator it;
    // for(it=m.begin(); it!=m.end(); ++it){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    print(m);
    auto it=m.find(4);
    m.erase(it);
    m.clear();
    print(m);
