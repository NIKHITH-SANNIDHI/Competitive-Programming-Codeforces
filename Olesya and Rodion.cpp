#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	if(t!=10)
	{cout<<t;
	for(int i=1;i<n;i++)
		cout<<"0";
	}
	else 
	{
		if(n!=1)
		{
		cout<<t;
		for(int i=2;i<n;i++)
		cout<<"0";
		}
		else
			cout<<"-1";
			
	}
	return 0;
}
