#include<bits/stdc++.h>
using namespace std;

int checkNeon(int x)
{
	int sq=x*x;
	int sumDigit=0;
	while(sq>0)
	{
		sumDigit=sumDigit+sq%10;
		sq=sq/10;
	}
	return (sumDigit==x);
}

int main()
{
	for(int i=1;i<=10000;i++)
		if(checkNeon(i))
			cout<<i<<" ";
}

