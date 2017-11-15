#include<bits/stdc++.h>
#define ll long long int
#define max 400001

using namespace std;


int main()
{
	ll n,a,b;
	cin>>n;
	ll x1[n],y1[n];
//	pair<ll,ll>p[n];
	map<ll,int>x;
	map<ll,int>y;
	map<pair<ll,ll>,ll>sub;
	ll c=0;
	
	for(ll i=0;i<n;i++)
		{
			cin>>a>>b;
		
			x[a]++;
			y[b]++;
		
			sub[make_pair(a,b)]++;
				
		}
	map<ll,int>::iterator iter;	
	map<pair<ll,ll>,ll>::iterator subiter;

	
/*		cout<<"SUB MAP"<<endl;
		
	for(subiter=sub.begin();subiter!=sub.end();subiter++)
	{
		cout<<"pair : "<<subiter->sub->first<<" frequency : "<<subiter->second;
	}	
	cout<<endl;
	cout<<"=========================================="<<endl;

	
*/	
	
	for(iter=x.begin();iter!=x.end();iter++)
	{
		a=iter->second;
		c+=a*(a-1)/2;
	}	
	
//	cout<<"C="<<c<<endl;
	
	for(iter=y.begin();iter!=y.end();iter++)
	{
		b=iter->second;
		c+=b*(b-1)/2;
	}	
//	cout<<"C="<<c<<endl;
	
	
	ll s,subtract=0;
	for(subiter=sub.begin();subiter!=sub.end();subiter++)
	{
		s=subiter->second;
		if(s>1)
		{
		
//		cout<<"s="<<s<<endl;
			
		subtract+=s*(s-1)/2;
		}
		
		
	}	
//	cout<<"subtract="<<subtract<<endl;
	c-=subtract;
	//cout<<"C="<<c<<endl;
	cout<<c<<endl;
	
	return 0;
}

	
/*	for(ll i=0;i<n-1;i++)
		for(ll j=i+1;j<n;j++)
		{
			if(x[i]==x[j])
				c++;
		
			else if(y[i]==y[j])
				c++;
		}		
	cout<<c;	
	/*for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(y[i]==y[j] && x[i]!=x[j])
				c++;
		}
	*/	
			
