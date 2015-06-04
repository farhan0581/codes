#include<iostream>
using namespace std;
class pra
{
	private:
		int x,y;
		int a=10;
	public:
		void sum(int p,int q)
		{
			int sum;
			sum=p+q;
			cout<<"the sum is";
			cout<<sum;
		}
		void out()
		{
			cout<<"the values are"<<endl;
			cout<<x<<" and "<<y;
		}
};
int main()
{
	int b,c;
	class pra obj;
	cout<<"enter tyey values"<<endl;
	cin>>b>>c;
	obj.sum(b,c);
	obj.out();
	
	return 0;
}
