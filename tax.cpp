#include<iostream>
using namespace std;
int main()
{
	int  n,t1,t2,t3,t4,r1=0;
	float r2=0.05,r3=0.1,r4=0.15;
	cout<<"enter the income : ";
	cin>>n;
	t1=n*r1;
	t2=n*r2;
	t3=n*r3;
	t4=n*r4;
	if(n<60000)
	{
	cout<<t1;
}
	else if(n>60000&&n<=150000)
	{
	cout<<t2;
}
	else if(n>150000&&n<=500000)
	{
	cout<<t3;
	}
	else
	{
	cout<<t4;
}
}
