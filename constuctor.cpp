#include<iostream>
using namespace std;
class student
{
	int no;
	char *name;
	public:
		student();
		student(int,char*);
		void display();
    };
student::student()
{
	no = 0;
	name = " unknown";
}
student::student(int x,char*y)
{
	no = x;
	name = y;
};
void student::display()
{
	cout<<"reg no "<<no<<endl;
	cout<<"name"<<name<<endl;
}
int main()
{
	student s;
	s.display();
	student s1( 123," yuvaraj");
	s1.display();
}
