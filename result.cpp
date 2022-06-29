#include <iostream>
using namespace std;
class bca
{
    float acc,st,eco,t,p;
    public:
    
    void enter()
    {
        cout<<"\n enter Account marks = ";
        cin>>acc;
        
        cout<<"\n enter Statistics marks = ";
        cin>>st;
        
        cout<<"\n enter Economics marks = ";
        cin>>eco;
    }
    void work()
    {
        t=acc+st+eco;
        p=t/3;
    }
    void print()
    {
        cout<<"\n\n TOTAL = "<<t;
        cout<<"\n PERCENTAGE = "<<p;
    }
};
int main()
{
    int i;
    bca skillqode[10];
    for(i=1;i<=3;i++)
    {
        skillqode[i].enter();
        skillqode[i].work();
        skillqode[i].print();
    }
    
    
}