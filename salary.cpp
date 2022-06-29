#include<iostream>
using namespace std;
int main()
{
    float s,h,d,t;
    
    cout<<"\n enter salary = ";
    cin>>s;
    
    if(s<=5000)
	{
		h=(s*0.08);
		d=(s*0.20);
		t=(s+h+d);
		cout<<"\n salary by hra = "<<h;
		cout<<"\n salary by da = "<<d;
		cout<<"\n total salary = "<<t;
	}
	else if(s>5000 && s<=10000)
	{
		h=(s*0.12);
		d=(s*0.30);
		t=(s+h+d);
		cout<<"\n salary by hra = "<<h;
		cout<<"\n salary by da = "<<d;
		cout<<"\n total salary = "<<t;
	}
	else if(s>10000 && s<=15000)
	{
		h=(s*0.15);
		d=(s*0.40);
		t=(s+h+d);
		cout<<"\n salary by hra = "<<h;
		cout<<"\n salary by da = "<<d;
		cout<<"\n total salary = "<<t;
	}
	else
	{
		h=(s*0.20);
		d=(s*0.50);
		t=(s+h+d);
		cout<<"\n salary by hra = "<<h;
		cout<<"\n salary by da = "<<d;
		cout<<"\n total salary = "<<t;
	}
}