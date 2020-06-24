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
	long long int sum = 0;
	int start = 0;
	int end = n-1;
	while(start<end){
		int k = arr[start]+arr[end];
		sum += (k*k);
		start++;
		end--;
	}
	cout<<sum;
	return 0;
}