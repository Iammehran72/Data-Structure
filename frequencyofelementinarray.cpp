#include<iostream>
using namespace std;
int main()
{
	int i,n,a[100],element,frequency=0;
	cout<<"Enter the Number of Elements : ";
	cin>>n;
	cout<<"Enter the Elements  : ";
	for(i=0; i<n; i++)
	cin>>a[i];
	cout<<"Enter the element of which you want to find the frequency : ";
	cin>>element;
	
	for(i=0; i<n; i++)
	{
		if(a[i]==element){
			frequency++;
		}
		
		
		
	}
	cout<<"Frequency of the "<<element<<"in array = "<<frequency;
}
