#include<iostream>
using namespace std;
int main()
{
	int i, n, product=1, a[100];
	cout<<"Enter the number of Elements (less than 100): ";
	cin>>n;
	cout<<"Enter the Elements : ";
	for(i=1; i<=n; i++)
	cin>>a[i];
	
	for(i=1; i<=n; i++){
		product=product*a[i];
	}
	cout<<"Product = "<<product;
}
