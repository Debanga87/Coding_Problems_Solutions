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
		int a,b,k;
		cin>>a>>b>>k;
		vector<int> A(a+1),B(b+1),boys(k),girls(k);
		for(int i=0;i<k;i++){
			cin>>boys[i];
			A[boys[i]]++;
		}
		for(int i=0;i<k;i++){
			cin>>girls[i];								//for every pair, first boy's entry then girl's....
			B[girls[i]]++;								// so keep count of degree of every boy and girl 
		}									//for any pair selected, we cannot include any other pair having same boy/girl
		ll sum=0;							//Hence, from k pairs,we took 1, so sum+=(k-1)-(A-1)-(B-1).... since we want only valid pairs,
		for(int i=0;i<k;i++){			//we are removing the invalid ones.... out of total links boy 1 has, we can take only 1, so A-1 invalid
			sum+=k-A[boys[i]]-B[girls[i]]+1;
		}
		cout<<sum/2<<'\n';
	}
	return 0;
}

