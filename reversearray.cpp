#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the Number of Elements: ";
    cin >> n;

    int a[n];
    
    cout << "Enter the Elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
        
    for(i=0; i<n; i++)
    cout<<a[i];
    
    
    cout<<endl;
    	
    	
        for(i=n-1; i>=0; i--)
       	cout<<a[i];
	
			
		
		
		return 0;
	}
