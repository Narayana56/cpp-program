#include<iostream>
using namespace std;
class addamount
{
	int amt;
	char *name;
	public:
		addamount();
		addamount(int);
		void display();
};
addamount::addamount()
{
	amt=50;
}
addamount::addamount(int x)
{
	amt=x;
}
void addamount::display()
{
	cout<<"the amount is "<<amt+50;
}
int main()
{
	addamount a;
	addamount a1(0);
	a1.display();
}
