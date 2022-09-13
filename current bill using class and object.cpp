#include<iostream>
using namespace std;
class EB
{
	int  number,tariff,pmr,cmr; 
	char name[20],t;
	float unit;
	public:
		void data();
		void calculate();
};
void EB::data()
{
	cout<<"enter a number:";
	cin>>number;
	cout<<"enter a name:";
	cin>>name;
	cout<<"enter a cmr";
	cin>>cmr;
	cout<<"enter a pmr";
	cin>>pmr;
	cout<<"enter a tariff";
	cin>>tariff;
}
void EB::calculate()
{
	switch(tariff)
	{
	case 1:
	unit=cmr-pmr;
	if(unit<=100 )
	{
		cout<<"amount="<<unit*1;
	}
	else if(unit>101 and unit<200)
	{
		cout<<"amount="<<unit*2.5;
		
	}
	else if(unit>201 and unit<500)
	{
		cout<<"amount="<<unit*4;
		
	}
	else if(unit>501)
	{
		cout<<"amount="<<unit*6;	
	}
	break;

	case 2:
	unit=cmr-pmr;
	if(unit<=100)
	{
		cout<<"amount="<<unit*2;
	}
	else if(unit>101 and unit<200)
	{
		cout<<"amount="<<unit*4.5;
		
	}
	else if(unit>201 and unit<500)
	{
		cout<<"amount="<<unit*6;
		
	}
	else if(unit>501)
	{
		cout<<"amount="<<unit*7;
		
	}
	break;
}	
}
int main()
{
	EB e;
e.data();
e.calculate();
}
