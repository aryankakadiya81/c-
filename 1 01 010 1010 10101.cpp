#include <iostream>
using namespace std;
int main()
{
   int i,j,n=1;
    
    for(i=1;i<=5;i++)
    {
		for(j=1;j<=i;j++) 
		{
		    if(n%2==1)
			{
			    cout<<" 1 ";
			    n++;
			}
			else
			{
			    cout<<" 0 ";
			    n++;
			}
			
		}
		cout<<" \n\n";
    }
}