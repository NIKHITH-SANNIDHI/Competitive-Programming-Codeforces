#include<bits/stdc++.h>
#define test for(int i=0;i<t;i++)
#define ull unsigned long long int
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);  
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	IOS
	ull n,h,k,current_h=0,t=0;
	cin>>n>>h>>k;
	ull a[n+1];
	rep(i,n)
		cin>>a[i];
	
	a[n]=0;
	ull i=0,processed[n];
	
	rep(i,n)
		processed[i]=0;
	
	while(i<n)
	{
		 if(a[i]<=h && h-current_h>=a[i] && !processed[i])
		{	
			processed[i]=1;
			current_h+=a[i];
			if(h-current_h>=a[i+1] && i+1<n)
			{
				i++;continue;
			}
			
		}	
				
		else
		{
			/*t++;
			
			if(current_h>=k)
				current_h-=k;

			else current_h=0;	
			
			if(h-current_h<a[i+1] && i+1<n)
				continue;
			else 
				i++;*/
				
			t+=current_h/k;
			
			current_h%=k;
			i++;		
			
		}
	}	
	
//			t++;
		
			/*if(current_h>=k)
				current_h-=k;

			else current_h=0;	*/
			
			t+=current_h/k;
			
			if(current_h%k!=0)
				t++;
			current_h=0;
					
		
	cout<<t;
	
	return 0;
}
