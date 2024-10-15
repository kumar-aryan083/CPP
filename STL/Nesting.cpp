#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define IOS ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
const int N = 1e7+10;
int hsh[N];
int pf[N];

int main(){
    IOS;
    map<pair<string, string>, vector<int> > m;
    int n;
    cin>>n;
    while(n--){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int i=0; i<ct; i++){
            int x;
            cin>>x;
            m[{fn,ln}].pb(x);
        }
    }
    for(auto &pr:m){
        // auto &full_name=pr.first;
        // auto &list=pr.second;
        cout<<pr.first.first<<" "<<pr.first.second<<endl;
        for(auto &val:pr.second){
            cout<<val<<" ";
        }
        cout<<endl;
    }




    // // Question.
    // map<int,set<string> > m;
    // int n;
    // cin>>n;
    // while(n--){
    //     int marks;
    //     string name;
    //     cin>>name>>marks;
    //     m[marks].insert(name);
    // }
    // auto &curr_it= --m.end();
    // while(true){
    //     // auto &students= curr_it->second;
    //     // int marks =curr_it->first;
    //     for(auto &student:curr_it->second){
    //         cout<<student<<" "<<curr_it->first<<endl;
    //     }
    //     if(curr_it==m.begin()) break;
    //     curr_it--;
    // }
}