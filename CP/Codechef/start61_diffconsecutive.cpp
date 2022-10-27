#include <bits/stdc++.h>
using namespace std;

void answer(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res=0;
    for (int i=0; i<n; i++){
        if(s[i]==s[i+1]) res++;
    }
    cout<<res<<endl;
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
