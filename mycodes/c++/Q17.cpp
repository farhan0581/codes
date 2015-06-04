# include <iostream>
# include <cstdio>
# include <cstring>
# include <stdlib.h>
using namespace std;

class ContactManager{
private:
	char email[30];
	char name[20];
	long long int mobile_no;
public:
	void search()
	{
			char x[30];
		cout<<"enter the email to get information\n";
		cin>>x;
		FILE *file;
		file=fopen("dict.txt","r");
		while(fscanf(file,"%s %s %lld",email,name,&mobile_no)!=EOF)
		{
			if(strcmp(x,email)==0)
			{
				cout<<"Complete info\n";
				cout<<"Name:: "<<name<<endl;
				cout<<"Email:: "<<email<<endl;
				cout<<"Mobile:: "<<mobile_no<<endl;
				cout<<"------------------------------------\n";
				break;
			}
		}
	fclose(file);
	}
	void getinfo()
	{
		cout<<"Enter Email Address\n";
		cin>>email;
		cout<<"Enter Name\n";
		cin>>name;
		cout<<"Enter Mobile No\n";
		cin>>mobile_no;
	}
	void delete_info()
	{
		char x[30];
		cout<<"Enter email to get complete information\n";
		cin>>x;
		FILE *file,*fp;
		file=fopen("dict.txt","r");
		fp=fopen("dict_2.txt","a+");
		while(fscanf(file,"%s %s %lld",email,name,&mobile_no)!=EOF)
		{
			if(strcmp(x,email)!=0)
			{
				fprintf(fp,"%s %s %lld\n",email,name,mobile_no);
			}
		}
		fclose(file);
		fclose(fp);
		remove("dict.txt");
		rename("dict_2.txt","dict.txt");
	}
	void save()
	{
		FILE *file;
		file=fopen("dict.txt","a+");
		fprintf(file,"%s %s %lld\n",email,name,mobile_no);
		fclose(file);
	}
};


int main()
{
	ContactManager obj;
	int choice;
	while(1){
		cout<<"1.Add contact details\n2.Get complete information\n3.Delete record Information\n4.Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					obj.getinfo();
					obj.save();
					break;
				}
			case 2:
				{
					obj.search();
					break;
				}
			case 3:
				{
					obj.delete_info();
					break;
				}
			case 4:
				{
					exit(0);
				}
		}
	}
	return 0;
}
