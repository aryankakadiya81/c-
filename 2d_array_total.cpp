#include<iostream>
using namespace std;
int main()
{
    int i,j,a[3][3],b[3][3];
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
            cout<<"b["<<i<<"]["<<j<<"]";
            cin>>b[i][j];
        }
    }
    
        cout<<"\t\tA\t\t\tB\t\t\tTotal\n";
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<"\t"<<a[i][j];
            }
            for(j=0;j<3;j++)
            {
                cout<<"\t"<<b[i][j];
            }
            for(j=0;j<3;j++)
            {
                cout<<"\t"<<a[i][j]+b[i][j];
            }
            cout<<"\n";
        }
}