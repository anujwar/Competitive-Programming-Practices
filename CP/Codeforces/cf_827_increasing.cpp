#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    set<int>s;
    bool flag=false;
    for(auto &val: v) {cin>>val;
    s.insert(val);}
    if(n==s.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}