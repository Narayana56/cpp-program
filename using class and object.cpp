#include<iostream>
using namespace std;
class add
{
	int x,y;
	public:
		void input();
		void display();
};
void add::input()
{
	cout<<"enter the two numbers : ";
	cin>>x>>y;
}
	void add::display()
	{
		cout<<"sum of two numbers : "<<x+y;
	}
	int main()
	{
		add a;
		a.input();
		a.display();
	}

