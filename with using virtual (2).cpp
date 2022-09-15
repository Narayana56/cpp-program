#include<iostream>
using namespace std;
class person
{
	public:
		int no;
		void getdata()
		{
			cout<<"enter the regno";
			cin>>no;
		}
};
class account
{
	int p;
	public:
		void getdata1()
		{
			cout<<"enter the pssword ";
			cin>>p;
		}
};
class admin
{
	char a[15];
	public:
		void getdata2()
		{
			cout<<"enter the name ";
			cin>>a;
		}
};
class master:public admin,public account,public person
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
	master a;
	a.getdata();
	a.getdata1();
	a.getdata2();
	a.getdata3();
}

