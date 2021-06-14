#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		/*
		n,k...{a1,a2,a3...an} st sum/k && min-max O(1)
		
		painters partition... {a1,a2,a3,a4}... students... set middle element as limit->if anyone goes above, increase students(min-max),
		->if reqd>given... false!
		
		sum=cf.k 
		(cf.k)%k=0 && sum>=n(since all positive)
		therefore, cf.k>=n -> cf>=(n/k) (LIF).... cf=gif(n+k-1/k)!!!!!!!!.... so direct cf=n+k-1/k will give total sum!
		*/
		ll cf=(n+k-1)/k;
		k*=cf;
		cout<<(k+n-1)/n<<'\n';			//Max element == sum/n ???		
	}
	return 0;
}

