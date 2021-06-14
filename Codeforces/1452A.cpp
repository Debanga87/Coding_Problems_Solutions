#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

int solve(int x,int y){
	/*   7,1          2,0	if abs(x-y)>1 else (x+y)
	|					| (x-1)*2+y   		... (max(x,y)-1)*min(x,y)
	|					|
	|
	|
	|
	|
	|_

	(1,7)
	|_ _ _ _ _ _ _
	*/
	if(abs(x-y)>=1){
		return max(x,y)*2-1;
	}else{
		return x+y;
	}
}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		cout<<solve(x,y)<<'\n';
	}
	return 0;
}

