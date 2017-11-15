#include<bits/stdc++.h>
using namespace std;

int minloc,maxloc;

int maximum(int a[],int n)
{
	int max=a[0];
	maxloc=0;
	for(int i=1;i<n;i++)
		max<a[i]?max=a[i],maxloc=i:0;
		
	return max;	
}

int minimum(int a[],int n)
{
	int min=a[0];
	minloc=0;
	for(int i=1;i<n;i++)
		min>a[i]?min=a[i],minloc=i:0;
		
	return min;	
}

inline int maxi(int a,int b)
{
	return a>b?a:b;
}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	int max=maximum(a,n);
	int min=minimum(a,n);
	
	int d1,d2;
	
	if(maxloc<minloc)
	{
		d1=maxloc-0;
		d2=(n-1)-minloc;
	}	
	
	else
	{
		d1=minloc-0;
		d2=(n-1)-maxloc;
	}
	
	int dmax=maxi(d1,d2);

	int dist=abs(minloc-maxloc)+dmax;
	cout<<dist;	
	
	
	
	
	return 0;
}
