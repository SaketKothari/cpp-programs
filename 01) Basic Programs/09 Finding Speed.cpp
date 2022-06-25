#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    int a, v, u;
    float speed;
    cout<<"Enter threee values:- ";
    cin>>u>>v>>a;
    
    speed = (v*v-u*u)/(2*a);
	cout << speed << endl;
 	return 0;
}

