#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	
	cout<<"Enter Number Of Elements : ";
	cin>>n;
	
	int a[n];
	int flag;
	
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
	cout<<endl;
	for(i=0; i<n-1; i++)
	{
		flag =0;
		for(j=0; j<n-i-1; j++)
		{
		
		if(a[j]>a[j+1])
		{
			int temp;
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			flag=1;
		}
		}
		if(flag==0)
		break;
		
	}
	
	cout<<"Sorted List = ";
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
		
	}
	return 0;
}
