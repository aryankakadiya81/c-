#include <iostream>
using namespace std;
class con
{
    int a;
    public:
    con()
    {
        cout<<"\n constructor ";
    }
    con(int k)
    {
        cout<<"\n lion q w e r = "<<k;
    }
};
int main()
{
    con p1(10),q2,s3(100);
}