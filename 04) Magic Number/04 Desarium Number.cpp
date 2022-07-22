#include<iostream>
#include<math.h>
using namespace std;

int countDigit(int n)
{
	int count_digits=0;
	while(n)
	{
		n=n/10;
		count_digits++;
	}
	return count_digits;
}

bool isDesarium(int n)
{
	int count_digits=countDigit(n);
	int sum=0;
	int x=n;
	
	while(x)
	{
		int r=x%10;
		sum=sum+pow(r,count_digits--);
		x=x/10;
	}
	return(sum==n);
}

int main()
{
	int n;
	cout<<"Enter any number:-";
	cin>>n;
	
	if(isDesarium(n))
		cout<<"Number is Desarium";//135
	else
		cout<<"Number is not Desarium";	
}
