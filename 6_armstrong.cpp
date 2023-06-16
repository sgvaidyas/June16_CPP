/*
n = 234


res = 2^3 + 3^3 + 4^3
    =  8  + 27  + 64 = 99

res == n ==>Armstrong 
res!=n   ==>Not an armstrong
sum=0
n=153
               x    
n     r=n%10  r^3   sum+=x     		n=n/10
------------------------------------------------
153    3       27    0+27= 27  		15
15     5      125    27+125=152     1
1      1        1    152+1=153      0
0=========================>


153 == 153  ---->Armstrong num


*/

#include<iostream>
#include<math.h>
using namespace std;

int isArmstrong(int n,int c);
int countDig(int n);
int main()
{
	int n;	
	cout<<"\n Enter n = ";
	cin>>n;	
	int c = countDig(n);
	int res = isArmstrong(n,c);
	cout<<"\n Sum returned = "<<res<<endl;
	if(res==n)
		cout<<n<<"\n  an armstrong num ";
	else
		cout<<"\n Not Is a armstrong num ";
}
int isArmstrong(int n,int c)
{
	int sum=0,r,x;
	while(n>0)
	{
		r = n%10;
		x = (int)pow(r,c);
		sum=sum+x;
		n=n/10;
	}
	return sum;
}
int countDig(int n)
{
	int cnt=0;
	while(n>0)
	{
		cnt++;
		n = n/10;
	}
	return cnt;
}
