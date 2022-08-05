//Palindromic pattern

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		int j;
		for(j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		int k=i;
		for(;j<=n;j++)
		{
			cout<<k--<<" ";           //print no in decreasing order
	    }
	    k=2;
	    for(;j<=n+i-1;j++)
		{
			cout<<k++<<" ";           //print no in increasing order
	    }
	    
		cout<<endl; 
	}
}
