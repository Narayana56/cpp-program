#include<iostream>
using namespace std;
int main()
{
	int p,t,a,r1=10,r2=12,x;
	cout<<"ENter the principle amount"<<endl;
	cin>>p;
	cout<<"Enter the years"<<endl;
	cin>>t;
	cout<<"Enter the age"<<endl;
	cin>>a;
	if (a>60)
	x = (p*t*r1)/100;
	else
	x = (p*t*r2)/100;
    cout<<"Income="<<x;
}
