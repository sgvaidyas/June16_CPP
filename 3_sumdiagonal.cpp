#include<iostream>
using namespace std;


int main()
{
	int r,c;	
	cout<<"\n Enter num of rows and cols = ";
	cin>>r>>c;	
	int a[r][c];
	cout<<"\nEnter the ele = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nELE  = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	int sum=0;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(i==j)
			{
				sum = sum+a[i][j];
			}
		}
	}	
	cout<<"\n sum of diagonal ele = "<<sum;
}
