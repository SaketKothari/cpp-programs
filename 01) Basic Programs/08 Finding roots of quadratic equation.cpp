#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    float root1, root2, a, b, c;
    cout<<"Enter the value of a,b and c:- ";
    cin>>a>>b>>c;
    
    root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
 	
	cout << root1 << " " << root2 << endl;
 	return 0;
}

