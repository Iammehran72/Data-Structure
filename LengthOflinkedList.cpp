#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node* head = NULL;
struct node* tail = NULL;
int main()
{
	int i,n,count=0;
	cout<<"Enter Number Of Nodes : ";
	cin>>n;
	cout<<endl;
	
	for(i=0; i<n; i++)
	{
		struct node* temp = new node;
		cout<<"Enter Data : ";
		cin>>temp->data;
		temp->next=NULL;
		
		if(head == NULL)
		{
			head=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=temp;
			
		}	
	}
	cout<<endl;
	struct node* traverse = new node;
	cout<<"Linked List = ";
	traverse=head;
	while(traverse!=NULL)
	{
		cout<<traverse->data<<" ";
		traverse=traverse->next;
		
	}
	cout<<endl;
	
	traverse=head;
	while(traverse!=NULL)
	{
		
		traverse=traverse->next;
		count++;
	}
	cout<<"Length Of Linked List = "<<count;
}
