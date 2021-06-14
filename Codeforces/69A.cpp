#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,x,y,z,xsum=0,ysum=0,zsum=0;
	cin>>n;
	while(n--){
		cin>>x>>y>>z;
		xsum+=x;
		ysum+=y;
		zsum+=z;
	}
	if(!xsum && !ysum && !zsum){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
