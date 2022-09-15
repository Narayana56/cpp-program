#include<iostream>
using namespace std;
class bank
{
	public:
		int a=8000,roi;
		void principal()
		{
		    cout<<"Principal Amount :"<<a;
		}
		
};
class AXIS:public bank
{
	public:
		void i1()
		{
			cout<<"\nRate of interest for Axis bank :"<<a*0.08;
		}
};
class ICICI:public bank
{
	public:
		void i2()
		{
			cout<<"\nRate of interest for Icici bank :"<<a*0.07;
		}
};
class SBI:public bank
{
	public:
		void i3()
		{
			cout<<"\nRate of interest for Sbi bank :"<<a*0.06;
		}
};
int main()
{
	bank b;
	b.principal();
	AXIS a;
	a.i1();
	ICICI i;
	i.i2();
	SBI s;
	s.i3();
}
