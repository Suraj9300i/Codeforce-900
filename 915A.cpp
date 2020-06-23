#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,k;
	cin>>n>>k;
	int arr[n];
	int mn = INT_MAX;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(k%arr[i]==0)
			mn = min(mn,k/arr[i]);
	}
	cout<<mn;
	return 0;
}