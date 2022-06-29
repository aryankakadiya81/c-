#include <iostream>
using namespace std;
int main()
{
   int i,j;
    
    for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
		    cout<<" \t"<<(char)(j);
		    
		}
		cout<<" \n\n";
    }
}