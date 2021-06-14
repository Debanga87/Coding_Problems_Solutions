#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long int n;
	int y,count=0;
	cin>>n;
	while(n){
		y=n%10;
		n/=10;
		if(y==4 || y==7){
			count++;
		}										//40047
	}
	if(count==4 || count==7){
		cout<<"YES";
	}else{
		cout<<"NO";
	} 
	return 0;
}

