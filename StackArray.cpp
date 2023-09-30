#include<iostream>
using namespace std;
int main()
{
	int n, x, top = -1;
	int choice;
	cout<<"Enter Number Of Elements : ";
	cin>>n;
	int stack[n];
	while(true)
	{
		cout<<"1 For Push :"<<endl<<"2 For POP :"<<endl<<"3 For Peek : "<<endl<<"4 For Display : "<<endl<<"0 For Exit :"<<endl;
		cin>>choice;
		
		if(choice == 0)
		break;
		
		switch(choice)
		{
			case 1:
				{
						cout<<"Enter Data: ";
						cin>>x;
						top++;
						stack[top]=x;
					
					break;
				}
			case 2:
				{
					if(top==-1)
					{
						cout<<"Underflow!"<<endl;
					}
					else
					{	
					int item;
					item = stack[top];
					top--;
					cout<<"Popped Item = "<<item<<endl;
					}
					break;
				}
			case 3:
				{
					if(top==-1)
					{
						cout<<"UnderFlow!"<<endl;
					}
					else
					{
						cout<<stack[top]<<endl;
					}
					break;
				}
			case 4:
				{
					int i;
					for(i=top; i>=0; i--)
					{
						cout<<stack[i]<<endl;
					}
					break;
				}
			default:
				{
					cout<<"Invalid choice!"<<endl;
					break;
				}
		}	
	}
	
	return 0;
}
