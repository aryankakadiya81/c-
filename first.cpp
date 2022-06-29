#include<iostream>
using namespace std;
int main()
{
    float un,am,tam,ch;
    
    cout<<"\n Enter units = ";
    cin>>un;
    
    if(un<=100)
    {
        am=(un*0.60)+(50);
        cout<<"\n amount of units = "<<am;
    }
    else if(un<=300 && un>100)
    {
        am=(un-100)*(0.80)+(110);
        cout<<"\n amount of units = "<<am;
    }

}