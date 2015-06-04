#include<iostream>
#include<stdlib.h>
using namespace std;
class bclass
{
	private:
		int count;
	public:
		bclass()
		{
			count=0;
		}
		void operator ++ ()
		{
			count++;
		}
		void operator -- ()
		{
			if(count!=0)
			count--;
			else
			count=0;
		}
		void display()
		{
			cout<<"the value of count is="<<count<<endl;
		}
};
int main()
{
	class bclass obj1;
	int ch;
	cout<<"1.enter 2.leaves 3.exit\n";
	while(1)
	{
		cout<<"choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:
				{
					++obj1;
					obj1.display();break;
				}
			case 2:
				{
					--obj1;
					obj1.display();break;
				}
			case 3:
				{
					exit(0);
				}
				
		}
	}
	return 0;
}
