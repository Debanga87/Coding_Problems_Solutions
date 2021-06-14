#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

void testcases(){
	int a,b;
	string s;
	cin>>a>>b>>s;
	int n=s.size();
	for(int times=0;times<2;times++){
		for(int i=0;i<n/2;i++){
			if(s[i]!='?'){
				if(s[n-i-1]!='?'){
					if(s[i]!=s[n-i-1]){
						cout<<-1<<'\n';
						return;
					}
				}else{
					s[n-i-1]=s[i];	
				}
			}
		}
		reverse(s.begin(),s.end());
	}
	a-=count(s.begin(),s.end(),'0');
	b-=count(s.begin(),s.end(),'1');
	int q=count(s.begin(),s.end(),'?');
	bool emptyMid=(n%2==1 && s[n/2]=='?');
	if(a<0 || b<0 || a+b!=q || (emptyMid && a%2==0 && b%2==0)){
		cout<<-1<<'\n';
		return;
	}
	if(a%2!=0 || b%2!=0){
		int i=n/2;
		if(s[i]!='?'){
			cout<<-1<<'\n';
			return;
		}
		s[i]=(a%2==1)?'0':'1';
		if(a%2==1){
			a--;
		}else{
			b--;
		}
	}
	if(a%2==1 || b%2==1){
		cout<<-1<<'\n';
		return;
	}
	for(int i=0;i<n/2;i++){
		if(s[i]=='?'){
			if(a>b){
				s[i]=s[n-i-1]='0';
				a-=2;
			}else{
				s[i]=s[n-i-1]='1';
				b-=2;
			}
		}
	}
	cout<<s<<'\n';
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	/*
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	*/
	int t;
	cin>>t;
	while(t--){
		testcases();
    }
	return 0;
}

