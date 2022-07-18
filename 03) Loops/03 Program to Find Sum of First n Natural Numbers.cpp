//Program to Find Sum of First n Natural Numbers
#include <iostream>
using namespace std;
int main()
{

int n,sum=0;
cout<<"Enter a no.:- ";
cin>>n;

for(int i=1;i<=n;i++)
{
  sum=sum+i;
}

cout<<"Sum to First "<<n<<" Natural numbers is "<<sum;

return 0;
}
