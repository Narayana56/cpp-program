#include<iostream>
using namespace std;
class student
{
	public:
	int no,m1,m2,m3;
	char a[100];
		void getdata()
		{
			cout<<"enter the rollno ";
			cin>>no;
			cout<<"enter the marks ";
			cin>>m1>>m2>>m3;
		}
};
class result:public student
{
	public:
		int t;
		void getdata1()
		{
			cout<<"the result is "<<m1+m2+m3<<endl;
			t=m1+m2+m3/3;
			cout<<"avverage marks "<<t<<endl;
			if(t>200)
			{
				cout<<"addmited"<<endl;
			}
			else
			{
				cout<<"not admited"<<endl;
			}
		}
};
int main()
{
	result s;
	s.getdata();
	s.getdata1();
}
