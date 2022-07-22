#include<iostream>
using namespace std;

int factorial (int n) {
	int fact = 1;
	while(n!=0) {
		fact = fact * n;
		n--;
	}
	return fact;
}

bool isStrong(int n)
{
	int sum = 0;
	int temp = n;
	while(temp!=0)
	{
		sum = sum + factorial(temp%10);
		temp = temp/10;
	}
	return (sum==n);
}

int main()
{
	int n;
	cout<<"Enter any number :- ";
	cin>>n;
	
	if(isStrong(n))
		cout<<"Yes " << n << " is Strong number" ;
	else
		cout<<"No " << n << " is not Strong number" ;
}
