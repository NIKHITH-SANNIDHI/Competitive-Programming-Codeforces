#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,info=0;
	cin>>n;
	int a[n];
	vector<bool>ba(n,0),tr(n,1);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

		int dir=0;

	
	for(int i=0;i<n;i++)//initial traverse
	{
		if(a[i]<=info && ba[i]==0)
		{
			info++;
			ba[i]=1;
	//		cout<<i<<endl;
	//		cout<<"dir="<<dir<<endl;
	//		cout<<"info="<<info<<endl;
		}
		
	}
	
	
	
	while(ba!=tr)
	{
		int fr=0,ff=0;
		for(int i=n-1;i>=0;i--)//reverse traverse
		{
			
			if(a[i]<=info && ba[i]==0)
		{
			
			info++;
			ba[i]=1;
			if(fr==0)
			{
				dir++;
			fr=1;
			}
	//		cout<<i<<endl;
	//		cout<<"dir="<<dir<<endl;
	//		cout<<"info="<<info<<endl;

		}
			
		}
		
		for(int i=0;i<n;i++)//forward traverse
		{
			if(a[i]<=info && ba[i]==0)
		{
			info++;
			ba[i]=1;
			
			if(ff==0)
			{
				dir++;
			ff=1;
		}
	//		cout<<i<<endl;
	//		cout<<"dir="<<dir<<endl;
	//		cout<<"info="<<info<<endl;
		}
			
		}
		
	}
	
	cout<<dir;
	
	
	
	
	
	
	
	return 0;
	
}
