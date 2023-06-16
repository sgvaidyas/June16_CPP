#include<iostream>
using namespace std;
int isPrime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n;	
	cout<<"\n Enter n = ";
	cin>>n;	
	int res = isPrime(n);
	if(res==0)
		cout<<n<<"\n Not a prime num ";
	else
		cout<<"\n Is a prime num ";
}
