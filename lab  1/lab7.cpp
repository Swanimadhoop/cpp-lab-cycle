#include<iostream>
using namespace std;

class matrix
{
	private:
		int **p;
		int d1,d2;

	public:
		matrix(){};
		matrix(int x, int y);
		void matrix_add(matrix &x, matrix &y);
		void matrix_mult(matrix &x, matrix &y);
		void matrix_transpose(matrix &x);
		int matrix_trace(void);
		void display(void);
		void get_element(int i, int j, int value)
		{
			p[i][j]=value;
		}
		int put_element(int i, int j)
		{
			return p[i][j];
		}
};
matrix::matrix(int x,int y)
{
	d1=x;
	d2=y;
	p=new int *[d1];
	for (int i=0;i<d1;i++)
	{
		p[i]=new int[d2];
	}
}

void matrix::matrix_add(matrix &x, matrix &y)
{
	for(int i=0;i<d1;i++)
		for(int j=0;j<d2;j++)
		{
			p[i][j]=x.p[i][j]+y.p[i][j];
		}
	void display();
}
void matrix::matrix_mult(matrix &x, matrix &y)
{
	for(int i=0;i<d1;i++)
		for(int j=0;j<d2;j++)
		{
			p[i][j]=x.p[i][j]* y.p[i][j];
		}		

	void display();
}
void matrix::matrix_transpose(matrix &x)
{
	for(int i=0;i<d1;i++)
		for(int j=0;j<d2;j++)
		{
			p[i][j]=x.p[j][i];
		}
}
int matrix::matrix_trace(void)
{
	int sum;
	sum =0;
	for(int i=0;i<d1;i++)
		for (int j=0;j<d2;j++)
		{
			if(i==j)
			{
				sum=sum+p[i][j];
			}
		}
	return sum;
}
void matrix::display()
{
	int i,j;
	cout<<"Required matrix is:"<<'\n';
	cout<<p[i][j];
}
int main()
{
	int m1,n1,m2,n2;
	cout<<"Enter the size of the first matrix: :";
	cin>>m1,n1;
	matrix A(m1,n1);
	cout<<"Enter the matrix element row by row: ";
	int value_1;
	for(int i=0;i<m1;i++)
		for(int j=0;j<n1;j++)
		{
			cin>>value_1;
			A.get_element(i,j,value_1);
		}
	cout<<"The entered matrix id: "<<'\n';
	for (int i=0;i<m1;i++)
		for(int j=0;j<n1;j++)
		{
			A.put_element(i,j);
			cout<<" ";
			cout<<endl;
		}
	A.matrix_trace();
	cout<<"Enter the size of the second matrix: ";
	cin>>m2,n2;
	matrix B(m2,n2);
	cout<<"Enter the matrix elemnet row by row: ";
	int value_2;
	for(int i=0;i<m2;i++)
		for(int j=0;j<n2;j++)
		{
			cin>>value_2;
			B.get_element(i,j,value_2);
		}
	cout<<"The entered matrix is: "<<'\n';
	for(int i=0;i<m2;i++)
		for(int j=0;j<n2;j++)
		{
			B.put_element(i,j);
			cout<<" ";
			cout<<endl;
		}
	B.matrix_trace();
	matrix C;
	C.matrix_add(A,B);
	C.matrix_mult(A,B);
	C.matrix_transpose(A);
	C.matrix_transpose(B);
	
	return 0;
}


