#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

void testcases(){
	int n,m,x;
	cin>>n>>m>>x;
	set<pii> s;			//unordered_set..automatically brings smallest p.first, so always entered in correct sequence
	int arr[n];
	for(int i=1;i<m+1;i++)
		s.insert({0,i});
	cout<<"YES\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		pii p=*s.begin();
		s.erase(p);
		cout<<p.second<<" ";
		s.insert({p.first+arr[i],p.second});
	}
	cout<<'\n';
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

