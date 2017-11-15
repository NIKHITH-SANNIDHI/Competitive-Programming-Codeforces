#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int  main()
{
	ull n,k;
	cin>>n>>k;
	ull id[n];
	id[0]=-1;	//dont consider the first element
	
	
	for(ull i=1;i<=n;i++)
		cin>>id[i];
		
	ull i,j=1;
	if(k==1)
		cout<<id[1];
else
{
		
	while(k>j*(j+1)/2)
		j++;
		
	ull x=j*(j+1)/2;
	
	while(k!=x)
	{
		x--;
		j--;
	}
	
	cout<<id[j];
	
		
		
}
	
		
	return 0;
}
