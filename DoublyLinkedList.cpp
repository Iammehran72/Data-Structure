#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* head;
struct node* tail;

int main()
{
	int n,i;
	cout<<"Enter Number Of Nodes : ";
	cin>>n;
	
	struct node* trav = new node;
	
	for(i=0; i<n; i++)
	{
		struct node* newnode = new node;
		
		
		cout<<"Enter Data : ";
		cin>>newnode->data;
		newnode->next=NULL;
		
		
		newnode->next=NULL;
		newnode->prev=NULL;
		
		if(head==NULL)
		{
			head=tail=newnode;
			newnode->prev=NULL;
		}
		else
		{
			newnode->prev=tail;
			tail->next=newnode;
			tail=newnode;
		}
		
	}
	cout<<endl;
	struct node* traverse = new node;
	traverse=head;
	cout<<"Linked List In Forward Direction : ";
	while(traverse!=NULL)
	{
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
	
	cout<<endl;
	traverse=tail;
	cout<<"Linked List In Backward Direction : ";
	while(traverse!=NULL)
	{
		cout<<traverse->data<<" ";
		traverse=traverse->prev;
	}
	
	return 0;
}
