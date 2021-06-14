#include<bits/stdc++.h>
using namespace std;

int main(){
	int y;
	cin>>y;
	int ans=y,a,b,c,d;
	while(1){
		ans++;
		a=ans%10;
		b=(ans/10)%10;
		c=(ans/100)%10;
		d=(ans/1000)%10;
		if(a!=b && a!=c && a!=d){
			if(b!=c && b!=d){
				if(c!=d){
					cout<<ans;
					break;
				}
			}
		}
	}
	return 0;
}
