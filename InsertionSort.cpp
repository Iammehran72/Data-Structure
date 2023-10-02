#include<iostream>
using namespace std;
int main()
{
	int i, j, n, temp;
	
	cout<<"Enter number Of Elements : ";
	cin>>n;
	
	int a[n];
	
	cout<<"Enter Elements : ";
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	cout<<"Unsorted List = ";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	
	for(i=1; i<n; i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	cout<<endl;
	cout<<"Sorted List = ";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	
	return 0;
}
