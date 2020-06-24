#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int ln;
	for(int i=0;i<n;i++){
		int p;
		if(arr[i]<m){
			p = 0;
			ln = m-arr[i];
		}
		else{

		}
	}

	return 0;
}