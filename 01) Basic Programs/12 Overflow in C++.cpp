#include <iostream>
using namespace std;

int main() {
	// This is overflow as here O/P is = -128
	char a = 127;
	a++;
	cout << (int)a << endl;
	
	char b = -128;
	b--;
	cout << ( int)b << endl;
		
	char c = 128;
	cout << (int)c << endl;

	char d = -128;
	cout << (int)d << endl;
	
	int e = INT_MAX;
	e++;
	cout << (int)e << endl;
	
	return 0;
}
