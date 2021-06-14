#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

void testcases(){
	int n;
	cin>>n;
	int arr[n];
	ll count=0;
	map<int,int> freq;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		count+=freq[x-i]++;
		//freq[x-i]++;
	}
	cout<<count<<'\n';
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

