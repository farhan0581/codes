#include<iostream>
using namespace std;
class node
{
	private:
		int val,value;
		node *next;
	public:
		node()
		{
			next=NULL;
			val=0;
		}
		node(int n)
		{
			next=NULL;
			val=n;
		}
		void addinfo()
		{
			node *ptr;
			ptr=this;
			cout<<this;
			cout<<"enter the info\n";
			cin>>value;
			if(ptr==NULL)
			{cout<<"her";
				ptr->val=value;
				ptr->next=NULL;
			}
			else
			{
				node *temp=ptr;
				while(temp->next)
				{
					temp=temp->next;
				}
				temp->next=NULL;
				temp->val=value;
			}
		}
		void display()
		{
			node *temp;
			temp=this;
			while(temp->next)
			{
				cout<<temp->val<<"->";
				temp=temp->next;
			}
		}
		
};
int main()
{
	node *start=NULL;
	cout<<&start<<endl;
	start->addinfo();
	start->display();
	return 0;
}
