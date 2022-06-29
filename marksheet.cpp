#include<iostream>
using namespace std;
int main()
{
    float P,statistics,account,economics,t;
    
    cout<<"\n enter statistics marks = ";
    cin>>statistics;
    
    cout<<"\n enter account marks = ";
    cin>>account;
    
    cout<<"\n enter economics marks = ";
    cin>>economics;
    
    t=statistics+account+economics;
    P=(t*100)/300;
    
    cout<<"\n totel marks = "<<t;
    cout<<"\n percentage = "<<P;
    
    if(P>=75)
	{
	    cout<<"\n Grade A";
	}
	else if(P<75 && P>=60)
	{
        cout<<"\n Grade B";
	}
	else if(P<60 && P>=45)
	{
	    cout<<"\n Grade C";
	}
	else if(P<45 && P>=35)
	{
        cout<<"\n Grade D";
	}
	else
	{
	    cout<<"\n you are FAIL in exam";
	}
}