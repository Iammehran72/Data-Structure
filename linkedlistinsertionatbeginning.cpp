#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

struct node* insertatbeg(struct node* head, int data)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    return temp;
}

void view(struct node* traverse)
{
    while (traverse != NULL)
    {
        cout << "Element = " << traverse->data << "\n";
        traverse = traverse->next;
    }
}

int main()
{
    int ch;
    int i, n;
    struct node* temp;
    cout << "Enter number of Nodes: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        cout << "Enter Data: ";
        cin >> temp->data;
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

	while (true){
	
    cout << "1 For View\n2 For Insertion: ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        view(head);
        break;
    case 2:
        int j;
        cout << "Enter the element to insert at the beginning: ";
        cin >> j;
        head = insertatbeg(head, j);
        view(head);
        break;
    default:
        break;
    }
}
    return 0;
}


