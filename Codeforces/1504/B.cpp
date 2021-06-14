#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

bool check(string s,int p,int q){
	int n=p-q+1;
	if(n%2){
		return 0;
	}
	int c1=0,c0=0;
	for(int i=p;i<=q;i++){
		if(s[i]=='1')
			c1++;
		else 
			c0++;
	}
	
	if(c1==c0)
		return 1;
	return 0;
}

void testcases(){
	int n;
	string a,b;
	cin>>n>>a>>b;
	int p=0,q=0;
	bool flag=false;
	for(int i=0;i<n;i++){
		if(a[i]!=b[i] && !flag){
			p=i;
			flag=true;
		}
		if(a[i]==b[i] && flag){
			q=i-1;
			flag=false;
			break;
		}
	}
	if(!p && !q){
		cout<<"YES\n";
		return;
	}else if(p==n-1){
		cout<<"NO\n";
		return;
	}else if(p && !q){
		q=n-1;
	}
	
	if(check(a,p,q)){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
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

