#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,sum=0,sum1=0;
	cout<<"Enter any two numbers:-";  //220 284
	cin>>a>>b;

	for(int i=1; i<=a/2; i++){
		if(a%i == 0)
			sum = sum+i;
	}
	
	for(int i=1; i<=b/2; i++){
		if(b%i == 0)
			sum1 = sum1+i;
	}
		
	if(a==sum1 && b==sum)
		cout<<"Numbers are Amicable";  
	else
		cout<<"Numbers are not Amicable";
}

