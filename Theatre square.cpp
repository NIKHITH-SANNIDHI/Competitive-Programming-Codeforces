#include<iostream>
using namespace std;

int main()
{
	unsigned long long int n,m,a,x,y;
	cin>>n>>m>>a;
	
	x=n/a;
	
	if(n%a)
		x++;
	
	y=m/a;
	
	if(m%a)
		y++;
	
	 cout<<x*y;		
	
	
	
	
	
	/*
	while(n>a && m>a)
	{
		m-=a;
		n-=a;
		f+=2;
	}
	
	if(n==0)
	{
		while(m>a)
			f++;
	}
	
	else if(m==0)
	{
		while(n>a)
			f++;
	}
	
	*/
	
	
	
	
	
	return 0;
}
