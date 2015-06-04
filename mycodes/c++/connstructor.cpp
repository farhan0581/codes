#include<iostream>
using namespace std;
class count
{
	private:
		static int counter;
		int temp;
	public:
		count()
		{
			temp=0;
			counter++;
			cout<<"No argument constructor called with counter="<<counter<<endl;
		}
		count(int x)
		{
			temp=x;
			counter++;
			cout<<"argument constructor called with counter="<<counter<<endl;
		}
		~count()
		{
			counter--;
			cout<<"destructor called with value of counter="<<counter<<endl;
		}		
};
int count::counter=0;
int main()
{
	class count c1,c2(7);
	return 0;
	
}

