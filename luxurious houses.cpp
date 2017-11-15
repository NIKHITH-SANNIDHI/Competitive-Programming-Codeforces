#include<bits/stdc++.h>
#define ll long long int 
#define l  long int 
#define ull unsigned long long int
#define pb push_back
#define vll vector<long long int>
#define vi vector<int>
#define sf scanf
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b)
{
	if(a.first==b.first)
	{
		return (a.second>=b.second)?true:false;
	}
	else return (a.first<b.first);
}


int main()
{
	ios_base::sync_with_stdio(0);
	vll v;
	vector<pair<ll,int> >s;
	ll n,t,max,a,diff;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>t;
		v.pb(t);
		s.pb(make_pair(t,i));
	}
	
	sort(s.rbegin(),s.rend(),comp);
	for(int i=0;i<n;i++)
		cout<<s[i].first<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<s[i].second<<" ";
	ll i=0,k=0,j;
	
	//for(ll i=0;i<n;i++)
	while(i<n&&k<n)
	{
		j=s[k].second;
	//	cout<<i<<" "<<k<<endl;
		if(i<=j)
		{
			if(v[i]<s[k].first||v[i]<s[k].first&&i!=j)
			{
				cout<<s[k].first-v[i]+1<<" ";
				i++;
			}
			else 
			{
				cout<<"0 ";
				k++;//since the max element has reached, dont care about jth this element any more
				i++;
			}
		}
		else
			k++;
	}
	return 0;
} 

