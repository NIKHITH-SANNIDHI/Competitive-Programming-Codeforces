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
	int n,h;
	cin>>n>>h;
	int sum=0,x;
	rep(i,n)
	{
		cin>>x;
		if(x>h)
			sum+=2;
		else
			sum++;
	}
	cout<<sum;
	return 0;
}
