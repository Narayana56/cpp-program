#include<iostream>
using namespace std;
int main()
{
	int regno;
	char name[50];
	int m1,m2,m3,m4;
	float total,avg;
	cout<<"enter the regno and name :"<<endl;
	cin>>regno>>name;
	cout<<"enter the students marks ="<<endl;
	cin>>m1>>m2>>m3>>m4;
	total=m1+m2+m3+m4;
	cout<<"total marke ="<<total<<endl;
	avg=total/4;
	cout<<"average marks of student ="<<avg<<endl;
	if(avg>90)
	cout<<"S grade";
	else if(avg<90&&avg>=80)
	cout<<"A grade";
	else if(avg<80&&avg>=70)
	cout<<"B grade";
	else if(avg<70&&avg>=60)
	cout<<"C grade";
	else if(avg<60&&avg>=50)
	cout<<"D garde";
	else
	cout<<"FAIL";
}

