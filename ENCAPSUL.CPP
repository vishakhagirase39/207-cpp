#include<iostream.h>
#include<conio.h>

class stud
{
	private:int m1,m2,rollno,total;
		float avg;
		char name[20];
	public:
		void get();
		void put();
};
void stud::get()
{
	cout<<"\n Enter Roll No:-";
	cin>>rollno;

	cout<<"\n Enter marks in subject 1st:-";
	cin>>m1;

	cout<<"\n Enter marks in subject 2nd:-";
	cin>>m2;
};
void stud::put()
{
	total=0;
	total=m1+m2;
	avg=total/2;

	cout<<"\n";
	cout<<"\n output is:-->";

	cout<<"\n Roll No:-- \t";
	cout<< rollno ;

	cout<<"\n marks in subject 1st:-- \t ";
	cout<< m1 ;

	cout<<"\n marks in subject 2nd:-- \t";
	cout<< m2 ;

	cout<<"\n total marks:-- \t";
	cout<< total ;

	cout<<"\n Average:-- \t";
	cout<< avg ;
};
void main()
{
	clrscr();
	stud s;
	s.get();
	s.put();
	getch();
}
