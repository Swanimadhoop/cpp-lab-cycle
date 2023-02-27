#include<iostream>
using namespace std;

class matrix
{
	private:
		int**p;
		int d1,d2;
	public:
		matrix(int x, int y);
		~matrix( );
		void get_element(int i,int j,int value)
		{
			p[i][j]=value;
		}
		int put_element(int i,int j)
		{
			return p[i][j];
		}
};
matrix::matrix(int x, int y)
{
	d1=x;
	d2=y;
	p=new int *[d1];
	for (int i=0;i<d1;i++)
	{
		p[i]=new int[d2];
	}
}
matrix::~matrix()
{
	for(int i=0;i<d1;i++)
	{
		delete p[i];
	}
	delete p;
	cout<<"MEMORY HAS BEEN DELETED"<<'\n';
	
}
int main()
{
	int m,n,di,p;

	cout<<"Enter the size of matrix : ";
	cin>>m>>n;

	matrix A(m,n);
	cout<<"Enter the matrix element row by row : ";
	int value;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>value;
			A.get_element(i,j,value);
		}
		cout<<"The entered matrix is : ";
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A.put_element(i,j)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
