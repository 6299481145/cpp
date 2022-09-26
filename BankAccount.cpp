#include<iostream>
using namespace std;

class bank_account
{
    private:

    string depos_name="Neha Bharti";
    string account_no="123456789098";
    string account_type="Saving Account";
    float balance=10000;
    float amount;
    float total_amount;
    

public:

void input()
{
    cout<<"Enter your amount\n";
    cin>>amount;
}

void deposit()
{
   balance+=amount;
}

void withdraw()
{
   cout<<"Enter your amount\n";
   cin>>amount;
   if(balance<amount)
   {
    cout<<"Out of range amount\n";
   }
   else
   {
    balance-=amount;
    display();
   }

}
void display()
{
 cout<<"Name = "<<depos_name<<"\n";
 cout<<"Total amount = "<<balance<<"\n";
}

};

int main()
{
    bank_account ba ;
    int input;

    

    while(input!=3)
    {
    cout<<"*******************************************************\n";
    cout<<" Enter your choice: \n";
    cout<<"1. for deposit:  \n";
    cout<<"2. for withdraw: \n";
    cout<<"3. for exit \n";
    cout<<"*******************************************************\n";


    cin>>input;
    

    switch(input){
 case 1:
    ba.input();
    ba.deposit();
    ba.display();
    break;

case 2:
    ba.withdraw();
    break;

case 3:
   exit(0);

default:
    cout<<"wrong input \n";

input++;

}
  }

}