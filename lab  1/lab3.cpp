#include<iostream>
#include<string>
using namespace std;

class customers
{
	private:
		string cust_name;
		int acc_no;
		string acc_type;
		int balance;

	public:
		void input()
		{
			cout<<"Enter customer name: ";
			cin>>cust_name;
			cout<<"Enter account number: ";
			cin>>acc_no;
			cout<<"Enter account type: ";
			cin>>acc_type;
			cout<<"Enter balance: ";
			cin>>balance;
		}
		void new_account()
		{
			int acc_type,a,no;
			string pass;
			cout<<"Enter mobile number: ";
			cin>>no;
			cout<<"Enter customer name: ";
			cin>>cust_name;
			cout<<"Create a password(alphabets only): ";
			cin>>pass;
			cout<<"Choose account type you prefer: "<<'\n';
			cout<<"1.SAVINGS ACCOUNT"<<'\n';
			cout<<"2.SALARY ACCOUNT"<<'\n';
			cout<<"3.CURRENT ACCOUNT"<<'\n';
			cout<<"Enter acc_type(1/2/3): ";
			cin>>acc_type;
			cout<<"ACCOUNT SUCCESSFULLY CREATED!!"<<'\n';
			cout<<"Account number sent your registered mobile number"<<'\n';
			cout<<"Enter the amount to be deposited: ";
			cin>>a;
			if(a<500)
			{
				cout<<"Minimum balnce is 500."<<'\n';
				cout<<"Enter amount: ";
				cin>>a;
				cout<<"Rs "<<a<<" deposited into your account."<<'\n';
			}
			else{
				cout<<"Rs "<<a<<" deposited into your account."<<'\n';
			}
		}
		void withdraw()
		{
			float amount;
			cout<<"Enter the money to be withdrawed: ";
			cin>>amount;
			if(balance-amount >=500)
			{
				balance=balance-amount;
				cout<<"MONEY WITHDRAWAL SUCCESSFUL."<<'\n';
			}
			else
			{
				cout<<"MINIMUM BALANCE SHOULD BE MAINTAINED"<<'\n';
			}
		}
		void deposit()
		{
			float amount;
			cout<<"Enter the money to be deposited: ";
			cin>>amount;
			cout<<"MONEY SUCCESSFULLY DEPOSITED."<<'\n';
			balance=balance+amount;
		}
		void balance_enquiry()
		{
			cout<<'\n'<<"Balance amount : "<<balance<<'\n';
		}
		void account_details()
		{
			cout<<'\n'<<"***********ACCOUNT DETAILS***********"<<'\n';
			cout<<"Customer name : "<<cust_name<<'\n';
			cout<<"Account number : "<<acc_no<<'\n';
			cout<<"Account type : "<<acc_type<<'\n';
			cout<<"Balance : "<<balance<<'\n';
		}
		void menu()
		{
			cout<<"1. CREATING A NEW ACCOUNT."<<'\n';
			cout<<"2. WITHDRAW MONEY."<<'\n';
			cout<<"3.DEPOSIT MONEY."<<'\n';
			cout<<"4.BALANCE ENQUIRY."<<'\n';
			cout<<"5.ACCOUNT DETAILS."<<'\n';
		}
		void display()
		{
			cout<<'\n'<<"****THANKYOU FOR BANKING WITH US.****"<<'\n'<<'\n';
		}

};
int main()
{
	int n,a,i;
	cout<<"Enter the number of customers : ";
	cin>>n;

	customers customer[n];
	for(i=0;i<n;i++){
		customer[i].menu();
		cout<<"Choose 1/2/3/4/5: ";
		cin>>a;

		if(a==1)
		{
			customer[i].new_account();
			customer[i].display();
		}
		else if(a==2)
		{
			customer[i].input();
			customer[i].withdraw();
			customer[i].display();
		}
		else if(a==3)
		{
			customer[i].input();
			customer[i].deposit();
			customer[i].display();
		}
		else if(a==4)
		{
			customer[i].input();
			customer[i].balance_enquiry();
			customer[i].display();
		}
		else if(a==5)
		{
			customer[i].input();
			customer[i].account_details();
			customer[i].display();
		}
	}
	return 0;
}




        	

