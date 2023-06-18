#include<iostream>
#include<stdlib.h>

using namespace std;

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void create();
void view();
void insert();
void dele();

int main() {
    int ch;
    while (1) {
        cout << "1 for Create : \n";
        cout << "2 for View : \n";
        cout << "3 for Insert : \n";
        cout << "4 for Delete : \n";
        cout << "Enter your choice : ";
        cin >> ch;

        if (ch == 1) {
            create();
        } else if (ch == 2) {
            view();
        } else if (ch == 3) {
            insert();
        } else if (ch == 4) {
            dele();
        } else {
            break;
        }
    }
    return 0;
}

void create() {
    int n, i;
    struct node* temp;
    cout << "Enter the number of nodes : ";
    cin >> n;
    for (i = 0; i < n; i++) {
        temp = (struct node*)malloc(sizeof(struct node));
        cout << "Enter Data : ";
        cin >> temp->data;
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }
}

void view() {
    struct node* traverse = head;
    while (traverse != NULL) {
        cout << traverse->data << " ";
        traverse = traverse->next;
    }
    cout << endl;
}

void insert() {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    struct node* traverse;
    int item;
    cout << "Enter node you want to Insert : ";
    cin >> temp->data;
    temp->next = NULL;
    cout << "Enter the node after which you want to insert another node : ";
    cin >> item;

    traverse = head;
    while (traverse->data != item) {
        traverse = traverse->next;
    }

    temp->next = traverse->next;
    traverse->next = temp;

    if (traverse == tail) {
        tail = temp;
    }
}

void dele() {
    struct node* traverse = head;
    struct node* temp;
    int item;
    cout << "Enter the node to delete: ";
    cin >> item;

    if (traverse != NULL && traverse->data == item) {
        head = traverse->next;
        free(traverse);
        return;
    }

    while (traverse != NULL && traverse->data != item) {
        temp = traverse;
        traverse = traverse->next;
    }

    if (traverse == NULL) {
        return;
    }

    temp->next = traverse->next;

    if (traverse == tail) {
        tail = temp;
    }

    free(traverse);
}

