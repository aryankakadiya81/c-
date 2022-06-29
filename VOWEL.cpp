#include<iostream>
using namespace std;
int main()
{
    char ab;
    
    cout<<"\n Enter alphabet = ";
    cin>>ab;
    
    if(ab=='a' || ab=='e' || ab=='i' || ab=='o' || ab=='u' || ab=='A' || ab=='E' || ab=='I' || ab=='O' || ab=='U')
    {
        cout<<"\n vowel";
    }
    else 
    {
        cout<<"\n consonant";
    }
    
    
}