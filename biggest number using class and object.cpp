#include<iostream>
using namespace std;
class biggest
{
	int x,y;
	public:
		void input();
		void display();
};
void biggest::input()
{
	cout<<"enter the two numbers : ";
	cin>>x>>y;
}
	void biggest::display()
	{
		if(x>y)
		{
			cout<<"x is greatest";
		}
		else
		{
			cout<<" y is greatest";
		}
	}
	int main()
	{
		biggest a;
		a.input();
		a.display();
	}

