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
		rev=(rev*10)+digit;
		num=num/10;
	}
	while(num!=0);
	
	cout<<"Reverse is "<<rev<<endl;
	
	if(n==rev)
		cout<<"Palindrome Number";
	else
		cout<<"Not Palindrome Number";	
	
}
