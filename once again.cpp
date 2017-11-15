#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,current=1;
	long long int t;
	unsigned long long int x=0;
	scanf("%d%lld",&n,&t);
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(long long int i=0;i<t;i++)
	{
		for(int j=0;j<n;j++)
		{
			
			if(a[j]==current || a[j]==current-1)
			{
				/*if(j==0)
				{
					if((a[j]-current)>1)
						continue;
				}
				else*/
				{
				
				cout<<"current= "<<current<<" j= "<<j<<"  a[j]= "<<a[j]<<endl;
				
				x++;
				cout<<"x="<<x<<endl;
				}
			}
			current++;
		}
	}
	
	cout<<x;
	
	
	return 0;
}
