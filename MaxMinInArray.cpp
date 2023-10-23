#include<iostream>
using namespace std;
int main()
{
	int n,i,max,min;
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
	max=a[0];
	min=a[0];
	for(i=0; i<n; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		
		}
		
		else if(a[i]<min)
		{
			min=a[i];
		
		}
		
	}
	cout<<"Maximum = "<<max<<endl<<"Minimum = "<<min;
	
}
