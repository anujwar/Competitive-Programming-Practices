// Title : Kevin and Permutation
// Link : https://codeforces.com/contest/1754/problem/B
#include <bits/stdc++.h>
using namespace std;

void answer(){
    int n;
    cin>>n;
    if(n%2==0){
        for(int i=1; i<=n/2; i++) cout<<i+(n+1)/2<<" "<<i<<" ";
    }
    else{
        for(int i=1; i<=n/2; i++) cout<<i<<" "<<i+(n+2)/2<<" ";
        if(n%2!=0) cout<<(n+1)/2;
    }
    cout<<endl;
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