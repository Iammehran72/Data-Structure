#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* next;
	struct node* prev;
};
struct node* head = NULL;
int main()
{
	int n, i, pos, choice;
	
	cout<<"Enter number of Nodes: ";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		struct node* temp = new node;
		cout<<"Enter Data: ";
		cin>>temp->data;
		temp->next=NULL;
		temp->prev=NULL;
		
		if(head == NULL)
		{
			head = temp;
		}
		else 
		{
			struct node* trav = head;
			while(trav->next!=NULL)
			{
				trav=trav->next;
			}
			trav->next=temp;
			temp->prev=trav;
			
		}
	}
	cout<<endl;
	
		cout<<"Linked List = ";
		struct node* traverse;
		traverse = head;
		while(traverse!=NULL)
	{
		cout<<traverse->data<<" ";
		traverse=traverse->next;
	}
		cout<<endl;
		while(true)
		{
		cout<<"1 To Delete First Node: "<<endl<<"2 To Delete Node: "<<endl<<"3 To Delete Last Node: "<<endl<<"0 To Exit : "<<endl;
		cout<<endl;
		cin>>choice;
		
		if(choice==0)
		break;
		
		switch(choice)
		{
			case 1:
				{
				
				if(head!=NULL)
				{
				struct node* temp = head;
				head=head->next;
				if(head!=NULL)
				{
				head->prev=NULL;
				}
				
					
					delete temp;
				}
					break;
				}
			case 2:
				{
					struct node* traverse;
					struct node* temp;
					cout<<"Enter position at which you want to delete: ";
					cin>>pos;
					if(pos<0 || pos>n)
					{
						cout<<"Invalid Position!";
					}
					else
					{
						traverse=head;
						for(i=1; i<pos; i++)
						
						{
							traverse=traverse->next;
						}
							
						cout<<traverse->data;
						cout<<endl; 
						if(traverse->prev!=NULL)
						{
						
						traverse->prev->next=traverse->next;
						}
						
						delete traverse;
						
					}
					break;
				}
			case 3:
				{	
					struct node* temp;
					struct node* traverse;
					
					if(head == NULL)
					{
						cout<<"List Is Empty!";
					}
					else{
					
					temp = head;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					traverse=temp->prev;
					traverse->next=NULL;
					delete temp;
					temp = NULL;
					}
					break;
				}
				
			case 0:
				break;
		}
		cout<<"Updated Linked List : ";
		traverse=head;
		while(traverse!=NULL)
		{
			cout<<traverse->data<<" ";
			traverse=traverse->next;
		}
		cout<<endl;
		
}
return 0;
}

