#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	// (A-Z) - (a - z)  'a'-'A'=32
	int n=s.size(),countup=0,countlo=0;
	for(int i=0;i<n;i++){
		if(s[i]-'a'>=0){
			//lowercase
			countlo++;
		}else{
			//uppercase
			countup++;
		}
	}
	if(countlo>=countup){
		//display in lowercase
		for(int i=0;i<n;i++){
			if(s[i]-'a'<0){
				s[i]=s[i]+32;
			}
		}
	}else{
		//display in uppercase
		for(int i=0;i<n;i++){
			if(s[i]-'a'>=0){
				s[i]=s[i]-32;
			}
		}
	}
	cout<<s;
	return 0;
}

