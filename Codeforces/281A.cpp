#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	if(s[0]-'a'>=0){
		s[0]-=32;
	}
	cout<<s;
	return 0;
}

