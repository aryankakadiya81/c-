#include<iostream>
using namespace std;
int main()
{
    int a;
    
    cout<<"\n enter a = ";
    cin>>a;
    
    if(a<-1)
    {
        cout<<"\na is nagative number";
    }
    else if(a>-1 && a<1)
    {
        cout<<"\na is zero(0)";
    }
    else
    {
        cout<<"\n a is positive number";
    }
}