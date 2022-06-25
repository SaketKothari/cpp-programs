#include<iostream>
using namespace std;

int main() {
	int a = 10;
	cout<<a<<endl;
	
	int b = 010;
	cout<<b<<endl;
	
	int c = 0x10;
	cout<<c<<endl;
	
	int d(10);
	cout<<d<<endl;
	
	int f = (10);
	cout<<f<<endl;
	
	int g{10};
	cout<<g<<endl;
	
	int h = {10};
	cout<<h<<endl;
	
	return 0;
}
