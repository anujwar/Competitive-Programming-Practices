#include <bits/stdc++.h>
using namespace std;

void answer(){
    int n;
    cin>>n;
    int mini,one=0, zero=0;
    int res=0;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        if(val==1)one++;
        if(val==0) zero++;
        mini = min(zero,one);
        zero -= mini;
        one -= mini;
        res = res + mini;
    }
    int ans = res + one/3;
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
