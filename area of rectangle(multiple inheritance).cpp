#include<iostream>
using namespace std;
class rectangle
{
	int l=2,b=3,h=2;
	public:
		void getdata1()
		{
			cout<<"area of a rectangle is "<<l*b<<endl;
			cout<<"volume of a rectangle is "<<l*b*h<<endl;
		}		
};
class shape
{
	char cuboid;
	public:
		void getdata2()
		{
			cout<<"shape is a cuboid"<<endl;
		}
};
class cuboid:public rectangle,public shape
{
	int l=3,b=2,h=2;
	public:
		void getdata3()
		{
			cout<<"area of cuboid is "<<2*(l*b+b*h+h*l)<<endl;
			cout<<"volume of cuboid is "<<l*b*h<<endl;		}
};
int main()
{
	cuboid c;
	c.getdata1();
	c.getdata2();
	c.getdata3();
}
