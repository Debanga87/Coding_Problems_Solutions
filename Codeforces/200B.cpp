#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,pi;
	cin>>n;
	double sum=0.0;
	for(int i=0;i<n;i++){
		cin>>pi;
		sum+=pi;
	}
	sum/=n;
	cout<<sum;
	return 0;
}

