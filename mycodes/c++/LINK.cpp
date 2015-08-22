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
		node *display()
		{
			node *temp;
			temp=this;
			//cout<<temp;
			while(temp!=NULL)
			{//cout<<"here";
				cout<<temp->val<<"->";
				temp=temp->next;
			}
			return this;
		}
		node *insertbet(node *temp)
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
			return this;
		}
		node  *sortlists(node *s)
		{
			node *temp,*ptr,*nxt,*prev,*pprev;
			int flag=0;
			pprev=this;
			//ptr=this;
			//cout<<"basic";
			// for(ptr=this;ptr)
			// {cout<<"outer";
				for(ptr=this;ptr->next!=NULL;ptr=ptr->next)
				{cout<<"in";
					prev=ptr;
					nxt=ptr->next;
					if((prev->val)>=(nxt->val))
					{
						//ptr->next=(ptr->next)->next;
						//(ptr->next)->next=ptr;
						temp=prev;
						if(nxt->next==NULL)
							prev->next=NULL;
						else
					    prev->next=nxt->next;
						nxt->next=temp;
						flag=1;
						//0ptr=prev;
						cout<<" if ";
						if(s==temp)
						{
							s=nxt;
						}
						else
						pprev->next=nxt;
					}
					pprev=ptr;
					//ptr=ptr->next;
				}
				//ptr=this;
				// if(flag==0)
				// 	break;
				// flag=0;
			//}
			return s;
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
					//cout<<start<<endl;
					break;
				}
			case 2:
				{
					start=start->display();
					//cout<<start<<endl;

					break;
				}
			case 3:
			{
				send=new node;
				start=start->insertbet(send);
				break;
			}
			case 4:
				{
					start=start->sortlists(start);
					break;
				}
			case 5:
				{
					exit(0);
					break;
				}
		}
	}
	

	
	return 0;
}
