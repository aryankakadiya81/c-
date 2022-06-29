#include<iostream>
using namespace std;
int main()
{
    int x,y;
    
    cout<<"\n enter x value = ";
    cin>>x;
    
    cout<<"\n enter y value = ";
    cin>>y;
    
    if(x<2000 || 3000<x)
    {
        cout<<"\n x = "<<x;
    }
    if(y>100 && y<500)
    {
        cout<<"\n y = "<<y;
    }
}