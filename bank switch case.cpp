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
    int ch;
    
    Bank aryan(20000);
    do
    {
        cout<<"\n CHOICES ";
        cout<<"\n ENTER 1 FOR DEPOSITE ";
        cout<<"\n ENTER 2 FOR WIHDRAWAL ";
        cout<<"\n ENTER 3 FOR SHOW YOUR BALANCE ";
        cout<<"\n ENTER 0 FOR EXIT ";
        cout<<"\n";
        cout<<"\n";
        
        cout<<"\n ENTER YOUR CHOICE = ";
        cin>>ch;
        
        switch(ch)
        {
            case 1:
                    aryan.Deposit();
                    break;
            case 2:
                    aryan.Withdrawal();
                    break;
            case 3:
                    aryan.showb();
                    break;
            case 0:
                    break;
            default:
                    cout<<"\n INVALID CHOICE";
        }
    }while(ch!=0);
    
}