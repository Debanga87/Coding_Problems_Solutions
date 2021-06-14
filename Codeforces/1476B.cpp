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
		vector<int> p(n);
		for(int i=0;i<n;i++)
			cin>>p[i];
		/* 4 1... 20100,1,202,202.......20150,50,202,202
			1/20100<1/100			50/20150<1/100.....202/20200==1/100	
			202/20100+1>1/100			20101<20200
			... pi/(sum+=(<=pi)*100)
			for any pi, sum of p0 t0 pi-1 >=pi*100
			
			
			pi*100<=k*(sum+=p0...pi-1)
		*/
		ll sum=p[0],diff=0;
		for(int i=1;i<n;i++){
			diff=max(diff,(100ll*p[i]-k*sum+k-1)/k);				//k-1??
			sum+=p[i];
		}
		cout<<diff<<'\n';
	}
	return 0;
}

