#include<iostream>
using namespace std;
int main()
{
    char ab;
    
    cout<<"\n Enter alphabet = ";
    cin>>ab;
    
    if(ab>=65 && ab<=90)
    {
        cout<<"character = "<<(char)(ab+32);
    }
    else if(ab>=97 && ab<=122)
    {
        cout<<"character = "<<(char)(ab-32);
    }
}