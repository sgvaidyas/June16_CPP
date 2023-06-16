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
	int sumrow=0;
	int sum_of_all=0;
	int sum_cols=0;
	cout<<"\nELE  = \n";
	for(int i=0;i<r;i++)   //i=0
	{
		sumrow=0;
		for(int j=0;j<c;j++)   //j=0,1
		{
			cout<<a[i][j]<<"\t";
			sumrow = sumrow+a[i][j];   //sum= a[0][0]+ a[0][1]
		}
		cout<<" = "<<sumrow<<endl;
		sum_of_all = sum_of_all+sumrow;
	}	
	cout<<"\n===============================\n";
	//r=3 c=2
	for(int j=0;j<c;j++)     //j=0, 1 
	{
		sum_cols=0;
		for(int i=0;i<r;i++)  //i = 0 1 2      a[0][0]+a[1][0]+a[2][0]
		{
			sum_cols = sum_cols + a[i][j];
		}
		cout<<sum_cols<<"\t";		
	}
	cout<<"\n===============================\n";	
	cout<<"\n Sum of all elements = "<<sum_of_all;	
}


