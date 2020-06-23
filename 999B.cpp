#include<bits/stdc++.h>
using namespace std;

void Reverse(string &str,int start,int end){
	while(start<end){
		swap(str[start],str[end]);
		start++;
		end--;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	string str;
	cin>>str;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			Reverse(str,0,i-1);
		}
	}
	cout<<str;
	return 0;
}