#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

void testcases(){
	ll n,w;
	cin>>n>>w;
	multiset<ll> ms;		//multiset bc it automatically sorts incoming ips->balanced BST! 
	for(int i=0;i<n;i++){
		ll x;
		cin>>x;
		ms.insert(x);
	}
	int h=1,left=w;
	while(!ms.empty()){
		auto it=ms.upper_bound(left);		//upper bound returns index having value greater than or equal to the parameter
		if(it==ms.begin()){
			left=w;
			h++;
		}else{
			it--;
			int val=*it;
			left-=val;
			ms.erase(it);		//Also MS bc deletion is easy
		}
	}
	cout<<h<<'\n';
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		testcases();
    }
	return 0;
}

