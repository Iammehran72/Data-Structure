#include<iostream>
using namespace std;
int main()
{
	int i,x,n;
	cout<<"Enter Number of Elements : ";
	cin>>n;
	int a[n];
	
	cout<<"Enter Elements : ";
	for(i=0;i<n; i++)
	{
		cin>>a[i];
	}
	int element;
	cout<<"Enter Element You want to search = ";
	cin>>element;
	i=0;
	while(i<n && a[i]!=element)
	{
		i++;
	}
	if(i<n && a[i]==element)
	{
		cout<<"Element Found at "<<i;
	}
	else
	{
		cout<<"Element Not Found!";
	}
}
