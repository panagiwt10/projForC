#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Bank{
 private:
  string name;
  long long accnumber;
  char type[10];
  long long tot=0;
  long long amount=0;

public:
    void setvalue()
    {
        cout<<"Enter name\n";
        cin.ignore();

        getline(cin,name);
        cout<<"Enter acount number\n";
        cin>>accnumber;
        cout<<"Enter acoount type\n";
        cin>>type;
        cout<<"enter balance\n";
        cin>>tot;
    }
    void showdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Account No:"<<accnumber<<endl;
        cout<<"Account type:"<<type<<endl;
        cout<<"Balance"<<tot<<endl;
    }
    void deposit()
    {
        cout<<"\nEnter amount to be deposited\n";
        cin>>amount;
    }
    void showbal()
    {
        tot=tot+amount;
        cout<<"\nTotal balance is:"<<tot;
    }
    void withdraw()
    {
        int a,avai_balance;
        cout<<"\nEnter amount to withdraw\n";
        cin>>a;
        avai_balance=tot-a;
        cout<<"\nAvailable balance is:"<<avai_balance;
    }
};



int main() {

    Bank b;
    int choice;

    while (true) {
        cout << "\n~~~~~~~~Hello~~~~~~~~~\n\n";
        cout << "Enter your choice\n";
        cout << "\t1.Enter your choice number,account,type\n";
        cout << "\t2.Balance enquiry\n";
        cout << "\t3.Deposit money\n";
        cout << "\t4.Show total balance\n";
        cout << "\t5.Withraw money\n";
        cout << "\t6.cancel\n";
        cin >> choice;

        switch(choice)
        {
            case 1:
                b.setvalue();
                break;
            case 2:
                b.showdata();
                break;
            case 3:
                b.deposit();
                break;
            case 4:
                b.showbal();
            case 5:
                b.withdraw();
                break;
            case 6:
                exit(1);
                break;
            default:
                cout<<"\n invalid option\n";
        }
    }
}
