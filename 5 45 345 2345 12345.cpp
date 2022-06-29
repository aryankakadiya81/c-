#include <iostream>
using namespace std;
int main()
{
    int i,j,a=6;
    
    for(i=1;i<=5;i++)
	{
	    a=a-i;
		for(j=1;j<=i;j++)
		{
		    cout<<" \t"<<a;
		    a++;
		}
		cout<<" \n\n";
    }
}