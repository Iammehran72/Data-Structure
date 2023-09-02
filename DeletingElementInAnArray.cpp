#include<iostream>
using namespace std;
int main()
{
	int  a[100], i, num, size, pos;
	cout<<"Enter The Size Of The Array: ";
	cin>>size;
	cout<<"Enter The Elements : ";
	for(i=0; i<size; i++)
	{
		cin>>a[i];
	 } 
	 cout<<"Array before insertion: ";
	 for(i=0; i<size; i++)
	 {
	 	cout<<a[i];
	 	cout<<" ";
	 }
	 cout<<endl;
	 
	 cout<<"Enter The position at which you want to delete element : ";
	 cin>>pos;
	 
	 
	if (pos < 0 || pos >= size) 
	{
        cout << "Invalid Position!" << endl;
	}
	for(i=pos; i<size; i++)
	{
		a[i-1]=a[i];
	}
	size--;
	
	 cout << "Array after Deletion: ";
    for (i = 0; i < size; i++) 
	{
            cout << a[i] << " ";
    }
        cout << endl;
		
			
	return 0;
}

