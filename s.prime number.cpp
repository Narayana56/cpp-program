#include<iostream>
using namespace std;
int main()
{
	int n,m=0,x=0,i;
	cout<<"entre the number ";
	cin>>n;
	m=n/2;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			cout<<"not a prime number";
			x=1;
			break;
		}
	}
	if(x==0)
	{
		cout<<"prime number";
	}
}
