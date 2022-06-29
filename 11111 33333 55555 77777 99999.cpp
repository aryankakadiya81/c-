#include <iostream>
using namespace std;
int main()
{
   int i,j;
    
    for(i=1;i<=10;i++) 
    {
		for(j=1;j<=5;j++) 
		{
		    if(i%2!=0)
		    {
		        cout<<" \t"<<i;
		    }
		}
		cout<<" \n";
    }
}