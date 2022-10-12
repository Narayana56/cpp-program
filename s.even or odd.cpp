#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"entre the number "<<endl;
	cin>>n;
	try
	{
		if(!(cin>>n))
		throw n;
		if(n%2==0)
		{
			cout<<"even number ";
		}
		else
		{
			cout<<"odd number ";
		}
	}
	catch(...)
	{
		cout<<"give input as numbers only ";
	}
}
