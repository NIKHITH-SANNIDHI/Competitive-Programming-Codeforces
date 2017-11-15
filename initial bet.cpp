#include<iostream>
using namespace std;
int main()
{
	int c,sum=0;
	for(int i=0;i<5;i++)
		{
			cin>>c;
			sum+=c;
		}

	//(sum%5==0)?cout<<sum/5:cout<<"-1"; 
	if(sum%5==0)
	{
		int b=sum/5;
		if(b)
			cout<<b;
		else
			cout<<"-1";	
	}
	else
	{
		cout<<"-1";
	}	
	return 0; 
}


