#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
//	if(b==0)
//		cout<<a;
	if(b>0)
	{
		while(b)
		{
			if(++a>n)
				a=1;
			b--;
		}
		
	}
	
	else if(b<0)
	{
		b=abs(b);
		while(b)
		{
			//cout<<"a="<<a<<"  b="<<b;
			if(--a==0)
				a=n;
			b--;	
		}
	}	
	
	cout<<a;

}
