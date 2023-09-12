#include<iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

int main() {
    int i, n, pos, choice, inschoice, delchoice;

    cout << "Enter Number Of nodes: ";
    cin >> n;

    // Create the linked list by inserting nodes
    for (i = 0; i < n; i++) {
        struct node* temp = new node;

        cout << "Enter data: ";
        cin >> temp->data;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
    }

    cout << endl;

    struct node* traverse;
    traverse = head;
    cout << "Linked List: ";
    while (traverse != NULL) {
        cout << traverse->data << " ";
        traverse = traverse->next;
    }
    cout << endl;

    cout << "1 for Insertion: " << endl << "2 for deletion: ";
    cin >> choice;
    cout << endl;

    switch (choice) {
        case 1: {
            cout << "1 at The Beginning" << endl << "2 after" << endl << "3 at the end: ";
            cin >> inschoice;

            struct node* trav = new node;
            struct node* newnode = new node;
            struct node* prevnode = new node;

            switch (inschoice) {
                case 1:
                    cout << "Enter node you want to insert: ";
                    cin >> newnode->data;
                    newnode->next = head;
                    head = newnode;
                    break;

                case 2:
                    cout << "Enter node you want to insert: ";
                    cin >> newnode->data;
                    cout << "Enter position at which you want to insert: ";
                    cin >> pos;

                    if (pos < 0) {
                        cout << "Invalid position!";
                    }
                    else {
                        trav = head;
                        prevnode = NULL; // Initialize prevnode to NULL before using it.

                        for (i = 0; i < pos && trav != NULL; i++) {
                            prevnode = trav;
                            trav = trav->next;
                        }

                        if (prevnode == NULL) {
                            cout << "Invalid Position!";
                        }
                        else {
                            newnode->next = prevnode->next;
                            prevnode->next = newnode;
                        }
                    }
                    break;

                case 3:
                    cout << "Enter node you want to insert at the end: ";
                    cin >> newnode->data;
                    newnode->next = NULL;
                    tail->next = newnode;
                    tail = newnode;
                    break;
            }

            cout << endl;
            traverse = head;
            cout << "Updated Linked List: ";
            while (traverse != NULL) {
                cout << traverse->data << " ";
                traverse = traverse->next;
            }
            break;
        }

        case 2: {
            cout << "1 at the beginning" << endl << "2 at this position" << endl << "3 at the end: ";
            cin >> delchoice;

            struct node* trav = head;
            struct node* prevnode = NULL;

            switch (delchoice) {
                case 1:
                    if (head != NULL) {
                        head = head->next;
                        delete trav;
                    }
                    else {
                        cout << "The list is empty!";
                    }
                    break;

                case 2:
                    cout << "Enter position of the node you want to delete: ";
                    cin >> pos;

                    if (pos < 0) {
                        cout << "Invalid position!";
                    }
                    else {
                        int j = 1;
                        trav = head;
                        prevnode = NULL;

                        while (j < pos && trav != NULL) {
                            prevnode = trav;
                            trav = trav->next;
                            j++;
                        }

                        if (trav == NULL) {
                            cout << "Node does not exist!";
                        }
                        else {
                            prevnode->next = trav->next;
                            delete trav;
                        }
                    }
                    break;

                case 3:
                    if (head != NULL) {
                        trav = head;
                        while (trav->next != NULL) {
                            prevnode = trav;
                            trav = trav->next;
                        }
                        if (trav == head) {
                            head = NULL;
                        }
                        else {
                            prevnode->next = NULL;
                        }
                        delete trav;
                    }
                    else {
                        cout << "The list is empty!";
                    }
                    break;

                default:
                    cout << "Invalid choice!";
                    break;
            }
            cout << endl;
            traverse = head;
            cout << "Updated Linked List: ";
            while (traverse != NULL) {
                cout << traverse->data << " ";
                traverse = traverse->next;
            }
            break;
        }

        default:
            cout << "Invalid choice!";
            break;
    }

    return 0;
}

