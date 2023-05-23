#include<iostream>
using namespace std;
int main()
{
	int a[100], n, i=0;
	cout<<"Enter the number of Elements : ";
	cin>>n;
	cout<<"Enter The Elements  : ";
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	for(i=0; i<n; i++)
	{
	if(a[i]%2!=0)
		{
				cout<<"The Number "<<a[i]<<" is odd"<<endl;
	
	}
}
}
