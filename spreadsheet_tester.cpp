#include<bits/stdc++.h>
#include<string>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
	string s,s1,a;
	cin>>s;
	//s1='\0';
	//s1=s.getalpha();
	for(long int i=0;s[i]!=NULL;i++)
		{
			if(isalpha(s[i]))
				s1+=s[i];
			else if(!isalpha(s[i]))
				a+=s[i];
		}
		cout<<s1;
		
		//string s;
	//s=getalpha(a);
	long int n=s1.length(),i=0,sum=0;
	while(s1[i]!=NULL)  //doing without defining A=1,B=2...
	{
		sum+=pow(26,n-1)*((int)s1[i]-64);  //assuming letters are given in caps
		n--;
		i++;
	}
	cout<<"sum is"<<endl;
	cout<<sum<<endl;
	cout<<"numeric part is "<<a;
	
}
