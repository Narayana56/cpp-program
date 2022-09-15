#include<iostream>
using namespace std;
class person
{
	public:
		int no,p;
		char a[100];
		void getdata()
		{
			cout<<"enter the regno";
			cin>>no;
		}
};
class account:public person 
{
	public:
		void getdata1()
		{
			cout<<"enter the pssword ";
			cin>>p;
		}
};
class admin:public person
{
	public:
		void getdata2()
		{
			cout<<"enter the name ";
			cin>>a;
		}
};
class master:public virtual admin
{
	public:
		int k;
		void getdata3()
		{
			cout<<"enter the amount ";
			cin>>k;
			cout<<"transaction sucessful";
		} 
};
int main()
{
	account a;
	a.getdata();
	a.getdata1();
	admin b;
	b.getdata2();
	master m;
	m.getdata3();
}

