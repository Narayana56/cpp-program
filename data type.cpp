#include<iostream>
using namespace std;
class print
{
	int x;
	char *a;
	public:
		print(int,char*);
		print(char*,int);
};
print::print(int e,char *m)
{
	x=e;
	a=m;
	cout<<"enter the int and char "<<x<<a<<endl;
}
print::print(char *t,int n)
{
	a=t;
	x=n;
	cout<<"enter the char and int "<<a<<x;
}
int main()
{
	print e1(123," sai"),e2("sasi ",123);
}
