#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s1,s2;
	cin>>s1>>s2;
	vector<string> s;
	for(int i=0;i<s1.size();i++){
		if((s1[i]=='0' && s2[i]=='0') || (s2[i]=='1' && s1[i]=='1')){
			s.pb("0");
		}else if((s1[i]=='0' && s2[i]=='1') || (s1[i]=='1' && s2[i]=='0')){
			s.pb("1");
		}
	}
	for(int i=0;i<s.size();i++){
		cout<<s[i];
	}
	return 0;
}

