#include<bits/stdc++.h>
using namespace std;

char charconv(int x)
{
	cout<<"entered charconv 1"<<endl;
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
	
	cout<<"entered charconv "<<endl;
}


int main()
{
	string s,s1,s3,sab;
	cin>>s;
//	cout<<s1;
	
//	int sum=s1;
//	cout<<"sum ="<<sum;

long int a=0,k=s.length(),d;
	for(long int i=0;i<k;i++)
	{
		d=s[i]-'0';
		a=a*10+d;
	}
//	return a;
	
	cout<<"a= "<<a<<endl;
	double sum=static_cast<double>(a);
	int j=0;
	int tot=(log10(sum))/(log10(26));
	cout<<"tot= "<<tot<<endl;
	while(a!=0 )
	{
		cout<<"a="<<a<<endl;
		s1+=charconv(a%26);
		cout<<"a%26= "<<a%26<<endl;
		cout<<"charconv(a%26)="<<charconv(a%26)<<endl;
		//cout<<"s1[tot-j]="<<s1[tot-j]<<endl;
		if(a%26==0)
		a=a/26-1;
		else
		a=a/26;
				j++;		
		cout<<"entered loop"<<endl;
	}
	
	
		
		//s1.reverse();
		cout<<"s1="<<s1<<endl;
		//string sf
		reverse(s1.begin(),s1.end());
		//cout<<"in loop"<<endl;
		//for(int i=0;s1[i]!=NULL;i++)
		//	cout<<s1[i];
	//	if((tot+1)!=s1.length())
	//		s1.erase(0,1);	
		cout<<"after reversed "<<s1<<endl;
		
		return 0;
}


