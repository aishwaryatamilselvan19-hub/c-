#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	int num1,num2;
	float result;
	abc(int n1,int n2)
	{
		    num1=n1;
		    num2=n2;
	}
	void add()
	{
		result=num1+num2;
	}
	void subtract()
	{
		result=num1-num2;
	}
	void multiply()
	{
		result=num1*num2;
	}
	void divide()
	{
		result=num1/num2;
	}
	void modulus()
	{
		result=num1%num2;
	}
	void display()
	{
		cout<<"Result:"<<result;
	}
};
void main()
{
	clrscr();
	int n1,n2;
	cout<<"Enter first number:";
	cin>>n1;
	cout<<"Enter second number:";
	cin>>n2;
	abc obj(n1,n2);
	obj.add();
	obj.display();
	getch();
}
