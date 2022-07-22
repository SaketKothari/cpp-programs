#include<bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n)
{
	int sq=n*n;
	while(n>0)
	{
		if(n%10 != sq%10)
			return false;
		n=n/10;
		sq=sq/10;	
	}
	return true;
}

int main()
{
	int n;
	cout<<"Enter any number:-";
	cin>>n;
	
	if(isAutomorphic(n))
		cout<<"Number is Automorphic";  //25
	else
		cout<<"Number is not Automorphic";
}

