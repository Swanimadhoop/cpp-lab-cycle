#include<iostream>
#include<string>
using namespace std;

class students
{
	private:
		string name;
		int roll_no;
		int marks[3];
		char grade;
		int avg;

	public:
		void input()
		{
			cout<<"Enter the name : ";
			cin>>name;
			cout<<"Enter roll number : ";
			cin>>roll_no;
			cout<<"Enter marks of 3 subjects : ";
			for(int i=0;i<3;i++){
				cin>>marks[i];
			}
		}
		void calcGrade()
		{
			avg=((marks[0]+marks[1]+marks[2])/3);
			if(avg>90){
				grade='A';
			}
			else if(avg>80){
				grade='B';
			}
			else if(avg>70){
				grade='C';
			}
			else if(avg>60){
				grade='D';
			}
			else if(avg>50){
				grade='E';
			}
			else{
				grade='F';
			}
		}

		void display()
		{
			cout<<'\n'<<"Name : "<<name<<'\n';
			cout<<"Roll number : "<<roll_no<<'\n';
			cout<<"Mark of subject 1: "<<marks[0]<<'\n';
			cout<<"Mark of subject 2: "<<marks[1]<<'\n';
			cout<<"Mark of subject 3: "<<marks[2]<<'\n';
			cout<<"Grade : "<<grade<<'\n'<<'\n';
		}
};
int main()
{
	int n;
	int i;
	cout<<"Enter the number of students : ";
	cin>>n;

	students student[n];
	for(i=0;i<n;i++){
		student[i].input();
		student[i].calcGrade();
	}
	cout<<'\n'<<"**************Report***************";
	for(i=0;i<n;i++){
		student[i].display();
	}
	return 0;
}
