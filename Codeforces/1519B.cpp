#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

void testcases(){
	int n,m,k;
	cin>>n>>m>>k;
	int x=1,y=1;
	int cost1=0,cost2=0;
	while(x!=n){
		x++;
		cost1+=y;	
	}
	if(x==n && y!=m){
		cost1+=x*(m-y);
	}
	x=1,y=1;
	while(y!=m){
		y++;
		cost2+=x;	
	}
	if(y==m && x!=n){
		cost2+=y*(n-x);
	}
	if(k==cost1 || k==cost2)
		cout<<"Yes\n";
	else
		cout<<"No\n";	
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

