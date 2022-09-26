//Exercise 8.1

//------------------------- Preprocessor section ---------------------------------

#include<iostream>
#include<cstring>

#define SC 100			//Symbolic constant defined to store service charge
#define RATE 5			//Symbolic constant defined to store interest rate for savings account



using namespace std;

//--------------------------- Beginning of class account ----------------------------------
class account
{
	protected:
		char name[30];
		char acno[6];
		char actype[3];
		float bal;
	public:
		void deposit();
		void withdraw();
		void balance();
};
void account::deposit()
{
	float amt;
	cout<<"Enter amount to deposit: ";
	cin>>amt;
	bal = bal + amt;
	balance();
}

void account::withdraw()
{
	float amt;
	cout<<"Enter amount to deposit: ";
	cin>>amt;
	if(bal>=amt)
		bal = bal - amt;
	else
		cout<<"Transaction declined."<<endl;
	balance();
}
void account::balance()
{
	cout<<"Balance of account no "<<acno<<"("<<name<<") is: "<<bal<<endl;
}

//------------------------------- class account ends here --------------------------
//------------------------------- class cur_account starts here --------------------

class cur_account : public account
{
	public:
		void init();
		void min_bal();
};

void cur_account::init()
{
	strcpy(name, "Neha bharti");
	strcpy(acno, "12345");
	strcpy(actype, "CA");
	bal = 10000;
}

void cur_account::min_bal()
{
	if(bal<5000)
		bal = bal - SC;
	else
		cout<<"Minimum balance maintained."<<endl;
		
	balance();
}

//------------------------------- class cur_account ends here --------------------------
//------------------------------- class sav_account starts here --------------------

class sav_account : public account
{
	public:
		void init();
		void compute_int();

};

void sav_account::init()
{
	strcpy(name, "Bharti kumari");
	strcpy(acno, "12346");
	strcpy(actype, "SA");
	bal = 5000;
}

void sav_account::compute_int()
{
	int si;
	si = (bal * RATE * 1)/100;
	
	bal = bal + si;
	
	balance();
}

//------------------------------- class sav_account ends here --------------------------
//------------------------------- main function starts here --------------------

int main()
{
	cur_account ca;
	sav_account sa;	
	
	cout<<"Testing current account object: "<<endl;
	ca.init();
	ca.deposit();
	ca.withdraw();
	ca.min_bal();
	
	cout<<"Testing savings account object: "<<endl;
	sa.init();
	sa.deposit();	
	sa.withdraw();
	sa.compute_int();
	
	return 0;
}