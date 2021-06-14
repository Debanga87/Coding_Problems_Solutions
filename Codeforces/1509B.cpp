#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

void testcases(){
	int n;
	string s;
	cin>>n>>s;
	int t=count(s.begin(),s.end(),'T');
	int m=count(s.begin(),s.end(),'M');
	if(t!=2*m){
		cout<<"NO\n";
		return;
	}else{
		for(int times=0;times<2;times++){
			int count=0;
			for(int i=0;i<n;i++){
				if(s[i]=='T'){
					count++;
				}else{	
					count--;
				}
				if(count<0){
					cout<<"NO\n";
					return;
				}
			}
			reverse(s.begin(),s.end());
		}
		cout<<"YES\n";
	}
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

