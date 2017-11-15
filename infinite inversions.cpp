#include<iostream>
using namespace std;
int main()
{
	long long int n,a[1000][100],b[1000],p=0,q=0;
	cin>>n;
	for(long long int i=0;i<n;i++)
		{
			if(q==1000)
				p++;
			cin>>a[p][q++];
		} 
	for(long long int i=0;i<n;i++)
		{
			if(q==1000)
				p++;
			cout<<a[p][q++];
		} 
		
		
		
	return 0;
}
