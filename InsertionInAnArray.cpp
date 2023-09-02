#include<iostream>
using namespace std;

int main() {
    int a[100], i, num, pos, size;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Enter The Array: ";
    for (i = 0; i < size; i++) {
        cin >> a[i];
    }

    cout << "Array before Insertion: ";
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Enter the index at which you want to insert: ";
    cin >> pos;

    if (pos < 0 || pos > size) {
        cout << "Invalid Position!" << endl;
    } else {
        if (pos == 0) {
            cout << "Enter The Number You Want To Insert: ";
            cin >> num;

            for (i = size - 1; i >= 0; i--) {
                a[i + 1] = a[i];
            }
            a[0] = num;
            size++;
        } else {
            cout << "Enter The Number You Want To Insert: ";
            cin >> num;

            for (i = size - 1; i >= pos - 1; i--) {
                a[i + 1] = a[i];
            }
            a[pos - 1] = num;
            size++;
        }

        cout << "Array After Insertion: ";
        for (i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

