#include<iostream>
using namespace std;

class complex
{
	private:
		float real,img;

	public:
		complex()
		{
			real=0;
			img=0;
		}
		
		complex(float x, float y)
		{
			x=real;
			y=img;
		}
		complex operator+(complex);
		void display(void);
};
complex complex::operator+(complex c)
{
	complex temp;
	temp.real=real+c.real;
	temp.img=img+c.img;

	return(temp);
}
void complex::display(void)
{
	cout<<real<<"+"<<img<<"i"<<'\n';
}
int main()
{
	float real1,img1,real2,img2;

	cout<<"enter real and imaginary part of first complex number: ";
	cin>>real1>>img1;

	cout<<"enter real and imaginary part of second complex number.";
	cin>>real2>>img2;

	
	complex c1(real1,img1), c2(real2,img2), c4;

	c4=c1+c2;

	cout<<"The complex numbers are: ";
	c1.display();
	c2.display();
	
	cout<<"sum is  ";
	c4.display();

	return 0;
}



