#include<bits\stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,m;
	cin>>n>>m;
	string str[n];
	for(int i=0;i<n;i++)
		cin>>str[i];
	int arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];
	int res = 0;
	for(int i=0;i<m;i++){
		int a=0,b=0,c=0,d=0,e=0;
		for(int j=0;j<n;j++){
			if(str[j][i]=='A')
				a++;
			else if(str[j][i]=='B')
				b++;
			else if(str[j][i]=='C')
				c++;
			else if(str[j][i]=='D')
				d++;
			else if(str[j][i]=='E')
				e++;
		}
		int k = max(a,max(b,max(c,max(d,e))));
		res += (k*arr[i]);
	}
	cout<<res;
}