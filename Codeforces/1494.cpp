#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

bool balancedParenthesis(string s){
	stack<char> st;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('){
			st.push(')');
		}else if(st.empty() || s[i]!=st.top()){
			return 0;
		}else if(s[i]==st.top()){
			st.pop();
		}
	}
	if(st.empty())
		return 1;
	return 0;
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		string s2=s;
		char first=s[0],last=s[n-1];
		//modify s with a ( b) c(
		for(int i=0;i<n;i++){
			if(s[i]==first){
				s[i]='(';
			}else if(s[i]==last){
				s[i]=')';
			}else{
				//c ( here
				s[i]='(';
			}
		}
		//modify s2 with c )
		for(int i=0;i<n;i++){
			if(s2[i]==first){
				s2[i]='(';
			}else if(s2[i]==last){
				s2[i]=')';
			}else{
				//c ( here
				s2[i]=')';
			}
		}
		if(balancedParenthesis(s)||balancedParenthesis(s2))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

