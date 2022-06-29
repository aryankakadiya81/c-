#include<iostream>
using namespace std;
int main()
{
    int i,a[5],b[5],c[5],t[5],p[5];
    for(i=0;i<5;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"b["<<i<<"]=";
        cin>>b[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"c["<<i<<"]=";
        cin>>c[i];
    }
    cout<<"\n\tMaths\tphysics\tchemistry\ttotal\tper\tgrade\n";
    for(i=0;i<5;i++)
    {
        t[i]=a[i]+b[i]+c[i];
        p[i]=t[i]/3;
        cout<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<t[i]<<"\t"<<p[i];
        if(a[i]<35||b[i]<35||c[i]<35)
        cout<<"\tfail";
        else if(p[i]>90)
        cout<<"\ta grade";
        else 
        cout<<"\tb grade";
        cout<<"\n";
    }
}