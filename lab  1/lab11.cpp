#include<iostream>
using namespace std;

class class_2;
class class_1
{
	private:
		int value1;
	public:
		void set_value(int a)
		{
			value1=a;
		}
		void display(void)
		{
			cout<<"num1= "<<value1<<'\n';
		}
		friend void swap(class_1&,class_2&);
};

class class_2
{
	private:
		int value2;
	public:
		void set_value(int a)
		{
			value2=a;
		}
		void display(void)
		{
			cout<<"num2= "<<value2<<'\n';
		}
		friend void swap(class_1&,class_2&);
};
void swap(class_1&x,class_2&y)
{
	int temp= x.value1;
	x.value1=y.value2;
	y.value2=temp;
}
int main()
{
	int p,q;
	cout<<"Enter first number: ";
	cin>>p;
	cout<<"Enter second number: ";
	cin>>q;

	class_1 c1;
	class_2 c2;

	c1.set_value(p);
	c2.set_value(q);

	

	cout<<"Values before swapping: "<<'\n';
	c1.display();
	c2.display();

	swap(c1,c2);

	cout<<"Values after swapping: :"<<'\n';
	c1.display();
	c2.display();

	return 0;
}

