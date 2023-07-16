#include<iostream>
using namespace std;

void numsys(int n, int s)
{
    if(n == 0 || n == 1)
    {
        cout << n;
        return;
    }

    if(s > 9)
    {
        cout << "Invalid Input! Base should be between 2 and 9.";
        return;
    }

    numsys(n/s, s);
    cout << n%s;
}

int main()
{
    int num, sys;
    cout << "Enter the number system base (2-9) in which you want to convert: ";
    cin >> sys;

    if(sys < 2 || sys > 9)
    {
        cout << "Invalid Input! Base should be between 2 and 9.";
        return 0;
    }

    cout << "Enter the number you want to convert: ";
    cin >> num;
    
    cout << "Converted number in base " << sys << " = ";
    numsys(num, sys);
    
    return 0;
}

