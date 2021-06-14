#include<bits/stdc++.h>
using namespace std;

int main(){
	string arr;
	cin>>arr;
	int n=arr.size();
	vector<int> v;
	for(int i=0;i<n;i++){
		if(arr[i]=='.'){
			v.push_back(0);	
		}
		if(arr[i]=='-' && arr[i+1]=='.'){
			v.push_back(1);
			i++;
		}
		if(arr[i]=='-' && arr[i+1]=='-'){
			v.push_back(2);
			i++;
		}
	}
	
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
	
	cout<<endl;
	return 0;
}
