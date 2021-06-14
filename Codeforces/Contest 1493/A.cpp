#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> v;
		for(int i=k+1;i<=n;i++){
			v.pb(i);
		}
		//for lesser or equal to k
		for(int i=(k+1)/2;i<k;i++)
			v.pb(i);
		
		cout<<v.size()<<'\n';
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
		cout<<'\n';
		/*
		1-n... 1 2 3; k=2
		no subset of chosen numbers should equal k;
		
		5   3
		1 2 3 4 5			5 4 2 1 op
							4 5 2 desired 
		*/
	}
	return 0;
}

