#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<"a["<<i<<"]["<<j<<"]=";
        cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        if(a[i][j]==0)
        cout<<"\t";
        else
        cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }

}