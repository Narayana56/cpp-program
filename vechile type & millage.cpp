#include<iostream>
#include<conio.h>
#include<string.h>

class Vehicle
{
	int price;
	char ftype[20];
public:
	void getdata()
	{
		cout<<"\nEnter price, Fuel type " << endl;
		cin>>price>>ftype << endl;
	}
	void display()
	{
		cout<<"\nprice : "<<price<<", Fuel type : "<<ftype;
	}
};

class wheeler : public Vehicle
{
	float dist;
	float milage;
public:
	void getdata()
	{
		Vehicle :: getdata();
		cout<<"\nEnter Distance, Milage";
		cin>>dist>>milage;
	}
	void display()
	{
		Vehicle :: display();
		cout<<"\nDistance : "<<dist<<", Milage : "<<milage;
	}
};

int main()
{
	wheeler w;

	w.getdata();
	w.display();

	getch();
	return 0;
}
