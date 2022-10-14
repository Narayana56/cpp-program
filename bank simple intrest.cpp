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
class AXIS
{
	public:
		void i1()
		{
			cout<<"\nRate of interest for Axis bank :";
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
class SBI:public virtual AIXS
{
	public:
		void i3()
		{
			cout<<"\nRate of interest for Sbi bank :"<<a*0.06;
		}
};
int main()
{
	SBI s;
	s.principal();
	s.i1();
	s.i2();
	s.i3();
}
