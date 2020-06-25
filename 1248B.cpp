#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	long long p = 0;
	for(int i=0;i<n/2;i++){
		p += arr[i];
	}
	long long b = 0;
	for(int i=n/2;i<n;i++)
		b += arr[i];
	long long int res = (p*p)+(b*b);
	cout<<res;

	return 0;
}