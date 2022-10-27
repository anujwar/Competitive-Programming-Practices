#include <bits/stdc++.h>
using namespace std;

void answer(){
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    map<char, int> m1,m2;
    for(auto &val: s1) m1[val]++;
    for(auto &val: s2) m2[val]++;
    for(auto i='a'; i<='z'; i++){
        cnt = max(cnt, min(m1[i],m2[i]));
    }
    cout<<cnt<<endl;
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
