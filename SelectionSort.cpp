#include<iostream>
using namespace std;
int main()
{
	int i, j, n, temp;
	
	cout<<"Enter Number Of Elements : ";
	cin>>n;
	
	int a[n];
	
	cout<<"Enter Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	cout<<"List = ";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted List = ";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
		
	}
}
