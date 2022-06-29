#include <iostream>
using namespace std;
int main()
{
    int i,a[5],b[5],c[5],t[5],p[5];
    for(i=0;i<5;i++)
    {
        cout<<"Account["<<i<<"]=";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"Statistics["<<i<<"]=";
        cin>>b[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"Economics["<<i<<"]=";
        cin>>c[i];
    }
    cout<<"\n\tAccount\t\tStatistics\tEconomics\tTotal\t\tPer\tGrade\n";
    for(i=0;i<5;i++)
    {
        t[i]=a[i]+b[i]+c[i];
        p[i]=t[i]/3;
        cout<<"\t"<<a[i]<<"\t\t"<<b[i]<<"\t\t"<<c[i]<<"\t\t"<<t[i]<<"\t\t"<<p[i];
        if(a[i]<35||b[i]<35||c[i]<35)
        {
            cout<<"\tfail";
        }
        else if(p[i]>90)
        {
            cout<<"\tA grade";
        }
        else if(90>=p[i] && p[i]>70)
        {
            cout<<"\tB grade";
        }
        else if(70>=p[i] && p[i]>60)
        {
            cout<<"\tC grade";
        }
        else if(60>=p[i] && p[i]>50)
        {
            cout<<"\tD grade";
        }
        else if(50>=p[i] && p[i]>=35)
        {
            cout<<"\tE grade";
        }
        cout<<"\n";
    }
}