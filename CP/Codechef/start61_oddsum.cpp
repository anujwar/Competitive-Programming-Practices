#include <bits/stdc++.h>
using namespace std;

void answer(){
    int o=0,e=0;
    vector<int>v(3);
    for(auto &val: v){
        cin>>val;
    }
    for(int i=0; i<3; i++){
        if(v[i]%2==0) e++;
        else o++;
    }
    if(o>0 && e>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
