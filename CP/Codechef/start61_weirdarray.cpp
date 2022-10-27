#include <bits/stdc++.h>
using namespace std;

void answer(){
    int n;
    cin>>n;
    int sum=0, res=0;
    vector<int>v(n);
    for(auto &val: v) cin>>val;
    vector<int>left(n,1);
    vector<int>right(n,1);
    for(int i=0; i<n; i++){
        if(v[i]<v[i-1]) left[i] += left[i-1];
        if (v[n-1-i]<v[n-i]) right[n-1-i] += right[n-i];
    }
    for(int i=0; i<n; i++){
        sum += left[i]*right[i];
    }
    cout<<sum<<endl;
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


/*
for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    left, right = [1]*n, [1]*n
    for i in range(1, n):
        if p[i] < p[i-1]: left[i] += left[i-1]
        if p[n-1-i] < p[n-i]: right[n-1-i] += right[n-i]
    print(sum(left[i] * right[i] for i in range(n)))
*/