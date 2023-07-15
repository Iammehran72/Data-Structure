#include <iostream>
using namespace std;

int main()
{
    int i, j, n, frequency;
    cout << "Enter the Number of Elements: ";
    cin >> n;

    int a[n], b[n];
    cout << "Enter the Elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
	
	for(i=0; i<n; i++){
		b[i]=a[i]*a[i];
	}
	for(i=0; i<n; i++)
	cout<<b[i]<<"\t";
	
	return 0;
}

