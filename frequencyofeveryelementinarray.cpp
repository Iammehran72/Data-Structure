#include <iostream>
using namespace std;

int main()
{
    int i, j, n, frequency;
    cout << "Enter the Number of Elements: ";
    cin >> n;

    int a[n];
    cout << "Enter the Elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Frequency of each element is:\n";

    for (i = 0; i < n; i++)
    {
        frequency = 0; // Reset frequency for each new element
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                frequency++;
            }
        }
        cout << a[i] << " occurs " << frequency << " times" << endl;
    }
    
    return 0;
}

