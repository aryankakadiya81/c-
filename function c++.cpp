#include <iostream>
using namespace std;
class car
{
    int tyre;
    public:
    
    void SetTyre(int n)//setter
    {
        tyre = n + n;
    }
    int getTyre()//getter
    {
        return tyre;
    }
};
int main()
{
    car alto;
    alto.SetTyre(4);
    cout<<alto.getTyre();
}