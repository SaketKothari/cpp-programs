#include<bits/stdc++.h>
using namespace std;

int numsquareSum(int n)
{
	int squareSum=0;
	while(n)	
	{
		squareSum += (n%10)*(n%10);
		n=n/10;
	}
	return squareSum;
}

bool isHappy(int n)
{
	set<int>st;
	while(1)
	{
		n = numsquareSum(n);
		if(n==1)
			return true;        //1 is the last for happy no
			
		if(st.find(n)!=st.end())          //if n is present in set st return the position where n is present
		                                 //if n is not present in set st return the st.end()   
			return false;
		
		st.insert(n);		
	}
}

int main()
{
	int n;
	cout<<"Enter any number:-";
	cin>>n;
	
	if(isHappy(n))
		cout<<"Number is Happy";  //19
	else
		cout<<"Number is not Happy";
}

