#include <iostream>
#include<math.h>
using namespace std;

int main() 
{
    float dist, x1,x2,y1,y2;
    cout<<"Enter four values:- ";
    cin>>x1>>x2>>y1>>y2;
    
    dist=sqrt(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
 	
	cout << dist << endl;
 	return 0;
}

