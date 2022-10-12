#include<iostream>
using namespace std;
int main()
{
	int x,m=0,i;
	cout<<"enter the number ";
	cin>>x;
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		m=m+i;
	}
	if(m==x)
	{
		cout<<"perfect number ";
		cout<<x;
	}
	else
	{
		cout<<"not a perfect number ";
	}
}
