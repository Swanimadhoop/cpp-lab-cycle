#include<iostream>
#include<cmath>
using namespace std;

//area of rectangle
double area(double l,double w)
{
	return l*w;
}
//area of square
double area(double a)
{
	return a*a;
}
//area of triangle
double area(double b,double h,char t)
{
	return 0.5*b*h;
}
//area of circle
double area(double r,char c)
{
	return 3.14*r*r;
}
//area of trapezium
double area(double x,double y,double h)
{
	return 0.5*(x+y)*h;
}

int main()
{
	double l,w,b,a,r,h,x,y;
	int shape;

	cout<<"Enter 1 for rectangle , 2 for square , 3 for triangle , 4 for circle , 5 for trapezium: ";
	cin>>shape;

	if(shape==1){
		cout<<"Enter length: ";
		cin>>l;
		cout<<"Enter width: ";
		cin>>w;
		cout<<"Area of rectangle: "<<area(l,w)<<'\n';
	}
	else if(shape==2){
		cout<<"Enter side: ";
		cin>>a;
		cout<<"Area of square: "<<area(a)<<'\n';
	}
	else if(shape==3){
		cout<<"Enter base: ";
		cin>>b;
		cout<<"Enter height: ";
		cin>>h;
		cout<<"Area of triangle: "<<area(b,h)<<'\n';
	}
	else if(shape==4){
		cout<<"Enter radius: ";
		cin>>r;
		cout<<"Area of circle: "<<area(r)<<'\n';
	}
	else if(shape==5){
		cout<<"Enter first side: ";
		cin>>x;
		cout<<"Enter second side: ";
		cin>>y;
		cout<<"Enter height: ";
		cin>>h;
		cout<<"Area of trapezium: "<<area(x,y,h)<<'\n';
	}
	else{
		cout<<"SHAPE NOT FOUND.";
	}
	return 0;
}
