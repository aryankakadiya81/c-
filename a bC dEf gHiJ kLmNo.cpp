#include <iostream>
using namespace std;
int main()
{
    int i,j,a=65;
    
    for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
		    if(j%2==0)
		    {
		        cout<<" \t"<<(char)(a);
		    }
		    else
		    {
		        cout<<" \t"<<(char)(a+32);
		    }
		    a++;
		}
		cout<<" \n\n";
    }
}