#include<iostream>
using namespace std;

int main()
{
	int n,num,digit,rev=0;
	cout<<"Enter any number:-";
	cin>>num;
	
	n=num;
	do
	{
		digit=num%10;
		rev=rev+(digit*digit*digit);
		num=num/10;
	}
	while(num!=0);
	
	if(n==rev)
		cout<<"Armstrong Number";
	else
		cout<<"Not Armstrong Number";	
}
