#include <bits/stdc++.h>
using namespace std;

bool check_cop(int x, int y){
    int g = __gcd(x,y);
    if(g==1) return true;
    return false;
}

void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &val : v) cin>>val;
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--){
        for(int j=i; j>=0; j--){
            if(check_cop(v[i],v[j]))
                maxi = max(maxi, (i+j));
        }
    }
    if(maxi == INT_MIN) cout<<-1<<endl;
    else cout<< maxi+2<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}