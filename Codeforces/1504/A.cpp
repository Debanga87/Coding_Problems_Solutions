#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

bool palindrome(string s){
	int start=0,end=s.size()-1;
	while(start<=end){
		if(s[start]!=s[end]){
			return 0;
		}
		start++,end--;
	}
	return 1;
}

void testcases(){
	string s;
	cin>>s;
	bool all_a=true;
	for(int i=0;i<s.size();i++){
		if(s[i]!='a'){		
			all_a=false;
			break;
		}
	}
	if(all_a){
		cout<<"NO\n";
		return;
	}
	if(!palindrome('a'+s)){
		cout<<"YES\n"<<'a'+s<<'\n';
	}else{
		cout<<"YES\n"<<s+'a'<<'\n';
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		testcases();
    }
	return 0;
}

