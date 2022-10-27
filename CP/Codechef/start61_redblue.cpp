#include <bits/stdc++.h>
using namespace std;
int ans,n,m[102][20002];
vector<int>v,w;

void dfs_tree(int so, int a, int b){
    if(so == n+1) {ans = max(ans, min(a,b)); return;}
    if(m[so][a]>=b && m[so][a]!=0) return;
    m[so][a]=b;
    dfs_tree(so+1, a+v[so],b);
    dfs_tree(so+1, a, b+w[so]);
}

void answer(){
    // int n;
    cin>>n;
    ans=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<20002; j++){
            m[i][j]=0;
        }
    }
    // vector<int>v(n);
    // vector<int>w(n);
    for(auto &val: v) cin>>val;
    for(auto &val: w) cin>>val;
    dfs_tree(1,0,0);
    cout<<ans<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while (t--){
	    answer();
	}
	return 0;
}
