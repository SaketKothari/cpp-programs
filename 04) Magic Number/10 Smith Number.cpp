#include<iostream>
using namespace std;

int sumofDigits(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}

int isSmith(int n)
{
	int s=0;
	int t=n;
	
	while(n%2==0)
	{
		s=s+2;
		n=n/2;
	}
	
	for(int i=3; i<t/2; i=i+2)
	{
		while(n%i==0)
		{
			s=s+sumofDigits(i);
			n=n/i;
		}
	}
	
	if(n>2 || s!=sumofDigits(t))
		return 0;
	else
		return 1;	
}

int main()
{
	int n;
	cout<<"Enter any number:-";//666
	cin>>n;
	
	isSmith(n)?cout<<"Yes Number is Smith":cout<<"Number is not Smith";
}
