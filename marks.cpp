#include<iostream>
using namespace std;
int main()
{
    int a,s,e,t;
    float p;
    cout<<"\n enter account marks = ";
    cin>>a;
    
    cout<<"\n enter statastics marks = ";
    cin>>s;
    
    cout<<"\n enter english marks = ";
    cin>>e;
    
    cout<<"\n account = "<<a<<"\n statastics = "<<s<<"\n english = "<<e;
    
    t=a+s+e;
    
    p=(t*100)/300;
    
    cout<<"\n total marks = "<<t;
    
    cout<<"\n percentage = "<<p;
}

