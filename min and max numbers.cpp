#include<iostream>
using namespace std;
int main()
{
	int a[5],t,i,j;
	cout<<"enter the number";
	for(i=0;i<5;i++)
	cin>>a[i];
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if (a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	cout<<"the max number is"<<a[0]<<endl;
	cout<<"the min number is"<<a[4]<<endl;
	cout<<"the difference is"<<a[0]-a[4]<<endl;
}
