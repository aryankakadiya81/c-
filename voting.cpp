#include<iostream>
using namespace std;
int main()
{
    int a;
    
    cout<<"\n Enter age = ";
    cin>>a;
    
    if(a>=18)
    {
        cout<<"\n person is eligible for voting";
    }
    else
    {
        cout<<"\n person is NOT eligible for voting";
    }
}