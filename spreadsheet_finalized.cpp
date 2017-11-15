#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
long int stoi(string s)
{
	//string s="45000000";
	long int a=0,k=s.length(),d;
	for(long int i=0;i<k;i++)
	{
		d=s[i]-'0';
		a=a*10+d;
	}
	return a;
	//int a=(int)s;
	//cout<<a-1;
}

char charconv(int x)
{
	switch(x)
	{
		case 1:return 'A';
				break;
		case 2:return 'B';
				break;
		case 3:return 'C';
				break;
		case 4:return 'D';
				break;
		case 5:return 'E';
				break;
		case 6:return 'F';
				break;
		case 7:return 'G';
				break;
		case 8:return 'H';
				break;
		case 9:return 'I';
				break;
		case 10:return 'J';
				break;
		case 11:return 'K';
				break;
		case 12:return 'L';
				break;
		case 13:return 'M';
				break;
		case 14:return 'N';
				break;
		case 15:return 'O';
				break;
		case 16:return 'P';
				break;
		case 17:return 'Q';
				break;
		case 18:return 'R';
				break;
		case 19:return 'S';
				break;
		case 20:return 'T';
				break;
		case 21:return 'U';
				break;
		case 22:return 'V';
				break;
		case 23:return 'W';
				break;
		case 24:return 'X';
				break;
		case 25:return 'Y';
				break;
		case 0:return 'Z';
				break;				
		
						
	}
	
}



string getalpha(string s)
{
	string s1;
	//s1=s.getalpha();
	for(long int i=0;s[i]!=NULL;i++)
		{
			if(isalpha(s[i]))
					s1+=s[i];
	
		}	
		return s1;
}

string getnum(string s)
{
string s1;
	//s1=s.getalpha();
	for(long int i=0;s[i]!=NULL;i++)
		{
			if(!isalpha(s[i]))
					s1+=s[i];
	
		}	
		return s1;
}

long int ab_to_rc(string a)
{
	string s;
	s=getalpha(a);
	long int n=s.length(),i=0,sum=0;
	while(s[i]!=NULL)  //doing without defining A=1,B=2...
	{
		sum+=pow(26,n-1)*((int)s[i]-64);  //assuming letters are given in caps
		n--;
		i++;
	}
	return sum;
}

void rc_to_ab(string a)
{
	string s1,r,c;
	unsigned long long int i=1,j=0;
	while(a[i]!='C')
	{
		r+=a[i];
		i++;
	}
	i++;
	while(a[i]!=NULL)
	{
		c+=a[i];
		i++;
	}
	
	//double 
	long int x=stoi(c);
//	double sum=static_cast<double>x;
//	int tot=(log10(sum))/(log10(26));
		//cout<<"a= "<<a<<endl;
	double sum=static_cast<double>(x);
	//int j=0;
	int tot=(log10(sum))/(log10(26));
	while(x!=0 )
	{
		s1+=charconv(x%26);
		//cout<<"s1[tot-j]="<<s1[tot-j]<<endl;
		if(x%26==0)
		x=x/26-1;
		else
		x=x/26;
				j++;		
	}
		//s1.reverse();
		//string sf
		reverse(s1.begin(),s1.end());
		//cout<<"in loop"<<endl;
		//for(int i=0;s1[i]!=NULL;i++)
		//	cout<<s1[i];
	//	if((tot+1)!=s1.length())
	//		s1.erase(0,1);	
		s1=s1+r;
		
		cout<<s1<<endl;
}


int main()
{
	long int n,n1,n2;
	cin>>n;
	string s;
	for(long int i=1;i<=n;i++)
	{
		cin>>s;
		n1=s.find("R");
			n2=s.find("C");
		
		int x=(isalpha(s[n1+1]));
		if(n1==0 && x==0 && n2>n1 )
			rc_to_ab(s);
		else
			cout<<"R"<<getnum(s)<<"C"<<ab_to_rc(s)<<endl;
	
		
		
	}
	return 0;
}



