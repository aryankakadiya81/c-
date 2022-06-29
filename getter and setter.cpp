#include <iostream>
using namespace std;
class number
{
    int a;
    public:
    
    void Setnumber(int n,)//setter
    {
        a = n + n;
    }
    int Getnumber()//getter
    {
        return c;
    }
};
int main()
{
    number c;
    c.Setnumber(20);
    cout<<c.Getnumber();
}