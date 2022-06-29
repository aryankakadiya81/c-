#include <iostream>
using namespace std;
class Bank 
{
private:
    
    float bal;

public:

    Bank(int b)
    {
        bal=b;
    }
   
    void Deposit()
    {
        float amt;
        cout << "Enter Amount U want to deposit = ";
        cin >> amt;
        bal = bal + amt;
    }
    void Withdrawal()
    {
        float wamt;
        cout << "Enter Amount U want to withdraw =  ";
        cin >> wamt;
        if (wamt <= bal)
        {
            bal = bal - wamt;
        }
        else
        {
            cout << "Less Balance...";
        }
    }
    void showb()
    {
        cout<<"\n your total balance = "<<bal;
    }
};

int main()
{
    Bank aryan(20000),meet(20);
    aryan.Deposit();
    aryan.Withdrawal();
    aryan.showb();
    meet.showb();
}


