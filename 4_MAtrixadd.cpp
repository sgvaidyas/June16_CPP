#include<iostream>
using namespace std;
int main()
{
	int r,c;	
	cout<<"\n Enter num of rows and cols = ";
	cin>>r>>c;	
	int a[r][c],b[r][c],res[r][c];
	cout<<"\nEnter the ele A = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter the ele B = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"\n A = ELE  = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"\n B = ELE  = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	//calculate res
	cout<<"\n A = ELE  = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			res[i][j] = a[i][j]+b[i][j];
		}
		cout<<endl;
	}
	cout<<"\n res = ELE  = \n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<res[i][j]<<"\t";
		}
		cout<<endl;
	}
}
