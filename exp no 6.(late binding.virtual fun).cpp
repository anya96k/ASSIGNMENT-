#include<iostream>
class base class{
	public:int base_var;
	void display()
	{
		cout<<base_var;
	}
}; 
class derived class:public base class
{
	public int base_var;
	void display()
	{
		cout<<der_var;
	}
};
int main()
{
	base class a;
	der class b;
	base class*ptr;
	ptr=&b;
	ptr->display()
	return 0;
}
