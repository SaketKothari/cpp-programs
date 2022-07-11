#include<iostream>
using namespace std;

int main() {
	int a=5;
	a = 1,2,3;
	cout<<a<<endl;
	
	int b;
	b= (1,2,3);
	cout<<b<<endl;
	
	int c=2;
	(c&1)?cout<<"True":cout<<"False";
	cout<<endl;
	
	int d=10;
	d++;
	d*d;
	cout<<d<<endl;
	
	int e=1,f=3,g;
	g=f<<e;
	f=g*(f*(++e)--);
	e=e>>f;
	cout<<f<<endl;
}
