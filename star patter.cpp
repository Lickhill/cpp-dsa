#include<iostream>
using namespace std;
int main()
{

	int i,j,k;
	int n;
	cin>>n;
	
	for(j=1;j<=n;j++)//for row
	{
		for(i=1;i<=n-j;i++)//for spaces 
		{
			if(i>=1 && i<=n-j)
			cout<<"  ";
		}
		for(k=i;k<n+j;k++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=(n+n-j);i++)
		{
			if(i>=1&&i<j)
			cout<<"  ";
			else 
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}
