#include<iostream>
using namespace std;

int reverse(int num)
{
	int rev=0;
	while(num>0)
	{
		int ld=num%10;
		rev=rev*10+ld;
		num=num/10;
	}
	return rev;
}

bool isMystery(int n)
{
	for(int i=1;i<=n/2;i++)
	{
		int j=reverse(i);
		if(i+j==n)
		{
			cout<<i<<" "<<j<<" "<<endl;
			return true;
		}
	}
	return false;
}

int main()
{
	int n;
	cout<<"Enter any number:-";
	cin>>n;
	
	if(isMystery(n))
		cout<<"Number is Mystery";  //121
	else
		cout<<"Number is not Mystery";
}
