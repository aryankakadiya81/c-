#include<iostream>
using namespace std;
int main()
{
    float i,t,tt;
    
    cout<<"\n Enter income = ";
    cin>>i;
    
    if(i<=2500)
	{
		t=i*0.00;
        cout<<"\n slab tex 1 = "<<t;
	}
	else if(2500<=i && i<=5000)
	{
		t=(i-2500)*(0.10);
		cout<<"\n slab tex 2 = "<<t;
	}
	else if(5000<i && i<=10000)
	{
		t=(i-5000)*(0.20)+(250);
		cout<<"\n slab tex 3 = "<<t;
	}
	else
	{
		t=(i-10000)*(0.30)+(250)+(500);
		cout<<"\n slab tex 4 = "<<t;
	}
	tt=i-t;
    cout<<"\n income after tex = "<<tt;
}