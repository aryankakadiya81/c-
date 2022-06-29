#include<iostream>
using namespace std;
int main()
{
    int days,weeks,months,years,day;
    
    cout<<"\n enter days = ";
    cin>>days;
    
    years=days/365;
    months=(days%365)/30;
	weeks=(days%365)/7;
	day=days-((years*365)+(weeks*7));
    
    cout<<"\n years = "<<years;
    cout<<"\n months = "<<months;
    cout<<"\n weeks = "<<weeks;
    cout<<"\n days = "<<day;
    
}


