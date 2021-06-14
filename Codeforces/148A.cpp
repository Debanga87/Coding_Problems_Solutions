#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	bool vis[d+1]={0};
	int arr[4]={k,l,m,n};
	for(int i=0;i<4;i++){
		int p=arr[i];
		if(!vis[p]){
			for(int j=p;j<=d;j+=p){
				vis[j]=1;
			}
		}
	}
	int count=0;
	for(int i=1;i<=d;i++){
		if(vis[i]){
			count++;
		}
	}
	cout<<count<<'\n';
	return 0;
}

