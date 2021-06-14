#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int i=0,j=1,count=0;
	while(j<n){
		if(s[i]==s[j]){
			//RRRRR
			count++;
		}else{
			i=j;
		}
		j++;
	}
	cout<<count;
	return 0;
}

