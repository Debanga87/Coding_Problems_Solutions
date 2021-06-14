#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>

void testcases(){
	int a,b;
	cin>>a>>b;
	//a.b and a.(b-1) and a.(b-2)
	if(b==1){
		cout<<"NO\n";
		return;
	}
	if(b<=2)
		b*=2;
	cout<<"YES\n";
	cout<<a*(ll)(b-1)<<" "<<a<<" "<<a*(ll)b<<'\n';
	return;
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

