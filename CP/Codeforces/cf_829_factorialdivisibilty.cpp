// Title : Factorial Divisibility
// Link : https://codeforces.com/contest/1754/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long


long long result[500000] = {0};

/* 

 Find Factorial of a Number using Dynamic Programming 

 */

ll fact_dp(ll n){
    if (n >= 0) {

        result[0] = 1;

        for (ll i = 1; i <= n; ++i) {
            result[i] = i * result[i - 1];
        }
    }
        return result[n];
}

void answer(){
    ll n,x;
    cin>>n>>x;
    ll res = 0;
    vector<ll>v(n);
    for(auto &val : v) cin>>val;
    for(ll i=0; i<n; i++){
        res += fact_dp(v[i]);
    }
    if(fact_dp(x)==res) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    
}

int main() {
	// your code goes here
	//int t;
	//cin>>t;
	//while (t--){
	    answer();
	//}
	return 0;
}