#include<iostream>
using namespace std;

int main()
{
    int size = 100;
    int arr[size], i, j, element, deleteElement, num;
    cout << "Enter the number of elements: ";
    cin >> element;

    cout << "Enter the elements: ";
    for (i = 0; i < element; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < element; i++) {
        cout << arr[i] << " ";
    }

    int newSize = element;
    cout << "\nEnter the element you want to delete: ";
    cin >> deleteElement;

    for (i = 0; i < newSize; i++) {
        if (arr[i] == deleteElement) {
            for (j = i; j < newSize - 1; j++) {
                arr[j] = arr[j + 1];
            }
            newSize--;
            i--;
        }
    }

    cout << "After deletion: ";
    for (i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

