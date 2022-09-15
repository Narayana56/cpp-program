#include<iostream>
using namespace std;
class printnumber
{
	int n1;
	char *a;
	float n2;
	double n3;
	long int n4;
	public:
		printnumber(int);
		printnumber(char*);
		printnumber(float);
		printnumber(double);
		printnumber(long int);
};
printnumber::printnumber(int m1)
{
	n1=m1;
	cout<<"integer is "<<n1<<endl;
}
printnumber::printnumber(char *b)
{
	a=b;
	cout<<"character is "<<a<<endl;
}
printnumber::printnumber(float j)
{
	n2=j;
	cout<<"float is "<<n2<<endl;
}
printnumber::printnumber(double k)
{
	n3=k;
	cout<<"doouble is "<<n3<<endl;
}
printnumber::printnumber(long int h)
{
	n4=h;
	cout<<"longint is "<<n4<<endl;
}
int main()
{
	printnumber p1(123),p2("surya"),p3(0.4),p4(4.657),p5(698898);
}
