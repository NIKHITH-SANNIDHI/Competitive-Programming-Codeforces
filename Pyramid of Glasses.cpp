#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t,c=0;
	cin>>n>>t;
	int bd,mid,i=0,ltb=0,ltmid=0;
	
	if(n==1)
	{
		if(t>=1)
			c=1;
	}
	
	/*else if(n==2)
	{
		if(t==1||)
	}*/
	
	else
	{
		
	
	while(t>0)
	{
		int f=0;
		ltb=pow(2,i);
		if(i>=2)		//for middle glasses from lvl 3
			ltmid=ltb/2;	
		
	//	cout<<"i="<<i<<endl;
	//	cout<<"ltb="<<ltb<<endl;
	//	cout<<"ltmid="<<ltmid<<endl;
			
		
		if(t>=ltmid && i>=2)
		{
			int x=i-1;
			
			c+=x;
			if(t<ltb)
			t-=ltmid;		
		
			f=1;
		}
		
		if(t>=ltb)
		{
				if(i==0)
					c++;
				else
				{
					c+=2;
				}	
			t-=ltb;	
			
			f=1;
		}
	
		i++;
		
	//	cout<<"t="<<t<<endl;
	//	cout<<"c="<<c<<endl;
		
		if(!f)
			break;
	}	
	}

	cout<<c<<endl;
	return 0;
}
