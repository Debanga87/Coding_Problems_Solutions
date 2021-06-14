//Candidate Master
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n;
	cin>>n;
	ll v[n],hm[100000];			//precomputation... very important concept!!!
	for(int i=0;i<n;i++){
		cin>>v[i];
		hm[v[i]]=i;
	}	
	int m;
	cin>>m;
	ll c0=0,c1=0;
	while(m--){
		int q;
		cin>>q;
		c0+=hm[q]+1;
		c1+=n-hm[q];						// 3 1 2		hm[3]=0, hm[1]=1 hm[2]=2
											// 1 2 3		
	}
	cout<<c0<<" "<<c1;
	return 0;
}

