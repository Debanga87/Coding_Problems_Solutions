#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair   

void solve(int h[],int n,int k){
	int t;
	while(k--){						//1st mistake ... return in void exists!  2nd... stuck in vector<int> pos!
		t=0;
		while(t<n-1 && h[t]>=h[t+1]){
			t++;
		}
		if(t==n-1){
			cout<<-1<<'\n';
			return;
		}
		h[t]+=1;
	}
	//its somewhere in middle
	cout<<t+1<<'\n';
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int h[n];
		for(int i=0;i<n;i++)
			cin>>h[i];
		solve(h,n,k);
	}
	return 0;
}

