#include <iostream>
using namespace std;
int main()
{
    int i,a=0,b=0,c=1;
    
    for(i=1;i<=20;i++)
	{
		cout<<" "<<c;
		a=b;
		b=c;
		c=a+b;
	}


    return 0;
}