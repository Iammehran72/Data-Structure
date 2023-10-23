#include<iostream>
using namespace std;
int main()
{
	int n,i,linsearch;
	cout<<"Enter Number Of Elements: ";
	cin>>n;
	int a[n];
	
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"Array = ";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	int num;
	cout<<"Enter Number You Want to search : ";
	cin>>num;
	
	for(i=0; i<n; i++)
	{
	if (a[i]==num)
	{
		cout<<"Number is at "<<i<<"th index";
		break;
	}

	}	
}
