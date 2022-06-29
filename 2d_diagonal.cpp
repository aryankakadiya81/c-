#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3],x=0,y=0,z=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            x=x+a[i][j];
            else if(j>i)
            y=y+a[i][j];
            else
            z=z+a[i][j];
        }
    }
    cout<<"\n"<<"diagonal sum="<<x;
    cout<<"\n"<<"upper triangle sum="<<y;
    cout<<"\n"<<"lower triangle sum="<<z;
}