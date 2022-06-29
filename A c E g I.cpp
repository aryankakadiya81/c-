#include<iostream>
using namespace std;
int main()
{
    int i;
    
    for(i=1;i<=24;i+=4)
    {
        if(i%2==1)
        {
            cout<<" "<<(char)(i+64)<<" "<<(char)(i+98);
        }
    }
    
    
}