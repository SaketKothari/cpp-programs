//Program to find root of Quadratic Equation

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a,b,c,D;
  float root1,root2;
  cout<<"Enter coefficient of x^2 , x and constant term:-\n";
  cin>>a>>b>>c;
  
  D=b*b-4*a*c;
  
  if(D<0)
  	cout<<"Both roots are imaginary";
  	
  if(D==0)
  {
  	cout<<"Both roots are equal"<<endl;
  	root1=-b/(2.0*a);
  	cout<<root1;
  }
	  
  if(D>0)
  {
  	cout<<"Roots are real and distinct"<<endl;
	root1=(-b+sqrt(D))/(2*a);
	root2=(-b-sqrt(D))/(2*a);  	
	cout<<root1<<" "<<root2<<endl;
  }  

return 0;
}
