#include<iostream>
using namespace std;
class emp
{
	int x,y,b;
	char n[10],a[10];
	float d,h,p,g;
	public:
		void input();
		void display();
};
void emp::input()
{
	cout<<"enter the name";
	cin>>n;
	cout<<"enter the id";
	cin>>x;
	cout<<" enter the adders";
	cin>>a;
	cout<<"enter the number";
	cin>>y;
	cout<<"enter the basic pay of emp";
	cin>>b;
}
void emp::display()
{
	d=b*97/100;
	h=b*10/100;
	p=b*12/100;
	g=d+h+p+b;
	cout<<"the salary of empoly is "<<g;
}
int main()
{
	emp e;
	e.input();
	e.display();
}
