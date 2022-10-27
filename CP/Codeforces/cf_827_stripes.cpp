#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<string>v(8);
    for(auto &val :v){
        cin>>val;
    }
    int r=0,b=0;
    bool flag = false;
    for(int i=0; i<8; i++){
        r=0;
        for(int j=0; j<8; i++){
            if(v[i][j]=='R') r++;
        }
        if(r==8){
            cout<<"R"<<endl;
            flag = true;
            break;
        }
    }
    if(!flag){
        for(int i=0; i<8; i++){
            b=0;
        for(int j=0; j<8; i++){
            if(v[i][j]=='B') b++;
        }
        if(b==8){
            cout<<"R"<<endl;
            //flag = true;
            break;
        }
    }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}