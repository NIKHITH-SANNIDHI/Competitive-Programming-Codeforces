#include<bits/stdc++.h>
#define ull unsigned long long int 
#define mp make_pair

using namespace std;

int main()
{
	int n;
	cin>>n;
	map<ull,int>m;
	map<ull,int>loc;
	ull id;
	for(int i=0;i<n;i++)
	{
		cin>>id;
		m[id]++;
		loc[id]=i;
	}
	
	map<ull,int>::iterator mit;
	map<ull,int>::iterator locit;
	
	int max=-1;
	int maxarr[1000];
	
	for(mit=m.begin();mit!=m.end();mit++)	//get max likes
	{
		if(max<mit->second)
			max=mit->second;
	}
	
	//cout<<"max="<<max;
	
	int leastloc=9999;
	ull winner;
	
	for(mit=m.begin();mit!=m.end();mit++)	//find the least loc of max values
	{
		if(mit->second==max)
		{
	//		cout<<"max value id:"<<mit->first<<endl;
	//		cout<<"max value loc "<<loc[mit->first]<<endl;
	//		cout<<"leastloc="<<leastloc<<endl;
			//int x=mit->first;
			if(leastloc>loc[mit->first])
			{
				leastloc=loc[mit->first];
				winner=mit->first;
			}
		}
	}
	
	cout<<winner;
	
	
	return 0;
}
