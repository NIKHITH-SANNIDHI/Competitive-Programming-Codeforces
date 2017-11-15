#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;



int main()
{
	ull n,sum=0;
	cin>>n;
	vector<ull>v;
	ull x;
	for(ull i=0;i<n;i++)
	{
		cin>>x;
		sum+=x;
		v.push_back(x);
	}
	
	sort(v.begin(),v.end());
	
	
	
	//vector<int>::iterator it;
	ull k=sum/n,rem=sum%n,seconds=0;
	ull arr[n];
	
	for(ull i=0;i<n;i++)
	{
		arr[i]=k;
	}
	
	

	for(ull i=n-1;i>=0;i--)
	{
		if(rem!=0)
		{
			arr[i]++;
			rem--;
		}
		if(rem==0)
			break;
	}


	for(ull i=0;i<n;i++)
	{
		
		if(arr[i]>v[i])
		{
			seconds+=arr[i]-v[i];
		}
		
		/*if(v[i]<k)
		{
			seconds+=k-v[i];
		}*/
	}
	
	cout<<seconds<<endl;
	
	
	
	return 0;
}
