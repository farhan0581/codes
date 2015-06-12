#include <iostream>
#include <cstdlib>
using namespace std;
class node
{
	private:
		int val,value;
		node *next;
	public:
		node()
		{
			//cout<<"the constr. called\n";
			next=NULL;
			val=0;
		}
		node(int n)
		{
			next=NULL;
			val=n;
		}
		node *addinfo(node *temp)
		{
			int value;
			node *ptr;
			ptr=this;
			//cout<<this;
			cout<<"enter the info\n";
			cin>>value;
			//cout<<"ptr="<<ptr;
			if(ptr==NULL)
			{//cout<<"her";
				//node *temp;
				
				temp->val=value;
				temp->next=NULL;
				ptr=temp;
				return ptr;
			}
			else
			{//cout<<"hers";
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				temp->next=NULL;
				temp->val=value;
				ptr->next=temp;
				return this;
			}
		}
		void display()
		{
			node *temp;
			temp=this;
			//cout<<temp;
			while(temp!=NULL)
			{//cout<<"here";
				cout<<temp->val<<"->";
				temp=temp->next;
			}
		}
		void insertbet(node *temp)
		{
			int x,value;
			node *ptr;
			cout<<"enter the value to insert after and node's value\n";
			cin>>x>>value;
			ptr=this;
			while(ptr->val!=x)
			{
				ptr=ptr->next;
			}
			temp->val=value;
			temp->next=ptr->next;
			ptr->next=temp;
		}
		
};
int main()
{
	class node *start=NULL;
	class node *send;
	int ch;
	//cout<<&start<<endl;
	while(1)
	{
		cout<<"enter choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					send=new node;
					start=start->addinfo(send);
					break;
				}
			case 2:
				{
					start->display();
					break;
				}
			case 3:
			{
				send=new node;
				start->insertbet(send);
				break;
			}
			case 4:
				{
					exit(0);
					break;
				}
		}
	}
	

	
	return 0;
}
