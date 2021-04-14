/* auhtor : @akash kumar */

#include<bits/stdc++.h>
using namespace std;

int solve(int n)
{
	n=n-2;  //remove extra part
	n=floor(n/2);
	return n*(n+1)/2;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<solve(n)<<endl;
	}
	return 0;
}

