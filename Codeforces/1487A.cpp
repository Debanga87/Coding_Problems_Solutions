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
		int n;
		cin>>n;
		vector<int> arr(n);
		int low,ans=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr.begin(),arr.end());
		low=arr[0];
		for(int i=1;i<n;i++){
			if(arr[i]>low)
				ans++;
		}
		cout<<ans<<'\n';
	}
	return 0;
}

