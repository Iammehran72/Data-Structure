#include<iostream>
using namespace std;
struct node{
	int data;
	struct node* link;
};
struct node* head = NULL;

int main()
{
	int choice;
	struct node* top = NULL;
	while(true)
	{
	cout<<"1 To Push : "<<endl<<"2 To Display : "<<endl<<"3 To Peek : "<<endl<<"4 To PoP : "<<endl<<"0 To Exit : "<<endl;
	cin>>choice;
	if(choice==0)
	break;
	switch(choice)
	{
	case 1:
	 {
	 
	 
	 int x;
	 struct node* newnode = new node;
	 cout<<"Enter Data: ";
	 cin>>x;
	 newnode->data=x;
	 newnode->link=top;
	 top=newnode;
	 break;
	 
	}
	case 2:
		{
			struct node* temp;
			temp=top;
			if(temp==NULL)
			{
				cout<<"Stack is Empty!"<<endl;
			}
			else
			{
				while(temp!=NULL)
				{
					cout<<temp->data<<" "<<endl;
					temp=temp->link;
				}
			}
			break;
		}
	case 3: 
		{
		if(top==NULL)
		{
			cout<<"Stack is Empty!"<<endl;
		}
		else
		{
			cout<<"Top Element is : "<<top->data<<endl;
		}
		break;
		}
	case 4:
		{
			struct node* temp;
			temp=top;
			if(top==NULL)
			{
				cout<<"Stack is Empty!"<<endl;
				
			}
			else
			{
				cout<<"Popped Element = "<<top->data<<endl;
				top=top->link;
				delete temp;
				
			}
			break;
		}
	default:
		{
			cout<<"Invalid choice!";
			
		} 
	}
	}
	return 0;
}
