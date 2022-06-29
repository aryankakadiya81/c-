#include<iostream>
using namespace std;
int main()
{
    int a;
    
    cout<<"\n enter a = ";
    cin>>a;
    
    if(a%5==0)
    {
        cout<<"\na is divided by 5";
    }
    else if(a%3==0)
    {
        cout<<"\n a is divided by 3";
    }
    else
    {
        cout<<"\n a is not divided by 5 and 3";
    }
}