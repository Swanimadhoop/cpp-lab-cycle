#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class store
{
	private:
		int number;
		int code;
		string item;
		float  price;
		int quantity;
		int sum;

	public:
		void input(void);
		void add_item(void);
		void delete_item(void);
		int total(void);
		void receipt(void);
};

void store::input(void)
{
	cout<<"Enter the number of items: ";
	cin>>number;
	for(int i=0;i<number;i++)
	{
		cout<<"enter item name: ";
		cin>>item;
		cout<<"Enter item code: ";
		cin>>code;
		cout<<"enter quantity: ";
		cin>>quantity;
		cout<<"enter price : ";
		cin>>price;
	}
}


void store::add_item(void)
{
	cout<<"enter the number of item to be added: ";
	cin>>number;
	for(int i=0;i<number;i++)
	{
		cout<<"Enter item code: :";
		cin>>code;
		cout<<"Enter item name: ";
		cin>>item;
		cout<<"enter the quantity of the item: ";
		cin>>quantity;
		cout<<"Enter price of the item: ";
		cin>>price;
	}
}
int store::total()
{
	int tot;
	tot=quantity*price;
	return tot;

	sum=0;
	for(int i=0;i<number;i++)
	{
		sum=sum+price;
	}
	cout<<"TOTAL PRICE"<<sum;
}
void store::delete_item(void)
{
	cout<<"Enter the number of item to be removed: ";
	cin>>number;
	for(int j=0;j<number;j++)
	{
		cout<<"enter item code: ";
		cin>>code;
		cout<<"Enter item name: ";
		cin>>item;
		cout<<"The item has been removed from the list: "<<'\n';
	}
}
void store::receipt(void)
{
	cout<<"------------RECEIPT-------------"<<'\n';
	cout<<"ITEM"<<setw(10)<<"CODE"<<setw(10)<<"QUANTITY"<<setw(10)<<"PRICE"<<setw(10)<<'\n';
	cout<<item<<setw(10)<<code<<setw(10)<<quantity<<setw(10)<<price<<setw(10)<<'\n';
	cout<<"----------------------------------------------------------------------------"<<'\n';
	cout<<"                                 TOTAL : "<<sum<<'\n';
}
  


int main()
{
	int choice,one;

	store customer;
	
	cout<<"**************DEPATMENTAL STORE**********"<<'\n';
	cout<<"Press 1 to start";
	cin>>one;

	if(one==1)
	{
		do
		{
			cout<<"***********DEPARTMENTAL STORE*********"<<'\n';
			cout<<" 1 . ADDING ITEMS "<<'\n';
			cout<<" 2 . DELETING ITEM "<<'\n';
			cout<<" 3 . TOTAL VALUE "<<'\n';
			cout<<" 4 . RECEIPT "<<'\n';
			cout<<" 5 . QUIT "<<'\n';
			cout<<"Enter your choice(1-5) : ";
			cin>>choice;

			switch(choice)
			{
				case 1:
				customer.add_item();
				break;

				case 2:
				customer.delete_item();
				break;

				case 3:
				customer.input();
				customer.total();
				break;

				case 4:
				customer.input();
				customer.receipt();
				break;

				case 5:
				std::cout<<"\n========== THANKYOU ==========\n";
				break;
			}
		}while(choice!=5);
	}
	else{
		exit(0);
	}
	return 0;
}
		
