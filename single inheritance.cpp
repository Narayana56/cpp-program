#include<iostream>
using namespace std;
class employe
{
	int id=123,no=6788990;
	char*a="sai";
	public:
		void getdata()
		{
			cout<<"enter the id "<<id<<endl;
			cout<<"enter the no "<<no<<endl;
			cout<<"enter the name "<<a<<endl;
		}
};
class EMP:public employe
{
	int salary=20000,dec=10000,m=salary-dec;
	float b=salary*97/100,h=salary*10/100,p=salary*12/100,g=b+h+p+salary;
	public:
		void getdata1()
		{
			cout<<"enter the basic salary "<<salary<<endl;
			cout<<"enter the emp gross salary "<<g<<endl;
			cout<<"the dedection is "<<m<<endl;
			cout<<"net salary "<<g-m;
		}
};
int main()
{
	EMP emp;
	emp.getdata();
	emp.getdata1();
}
