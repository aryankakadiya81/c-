#include<iostream>
using namespace std;
int main()
{
    int i,n,a=1;
    
    cout<<"\n enter n = ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        cout<<"\t "<<i*a;
        a+=a;
    }
    
    
}