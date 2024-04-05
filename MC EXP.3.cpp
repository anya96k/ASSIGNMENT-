#include<iostream>
using namespace std;
class A
{
	int date;
	int month;
	int year;

  public:
	void getdata()
	{
		cout<<"enter the date,month,year"<<endl;
		cin>>date>>month>>year;
	}
	void display()
	{
		cout<<date<<"-"<<month<<"-"<<year<<"-"<<endl;
		cout<<date<<"/"<<month<<"/"<<year<<"/"<<endl;
		cout<<date<<"/"<<monthconverter(month)<<"/"<<year<<endl;
	}
	string monthconverter(int mon)
	{
		string cal[]={"","jan","feb","mar","june","july","aug","sep","oct","nov","dec"};
		return cal[mon];
	
	}
};
	int main()
	{
		A a1;
		 a1.getdata();
		 a1.monthconverter(2);
		 a1.display();
		 return 0;
	}
