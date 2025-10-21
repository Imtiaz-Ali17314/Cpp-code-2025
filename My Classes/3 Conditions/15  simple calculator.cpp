#include<iostream.h>
#include<conio.h>
main()
{
	float n1,n2;
	char op;
	 
	cout<<"Enter number 1: ";
	cin>>n1;
	cout<<"Enter number 2: ";
	cin>>n2;
	cout<<"Enter operater: ";
	cin>>op;
	
	if(op == '+')
	{
		cout<<n1<<"+"<<n2<<"="<<n1+n2;
	}
	else if(op == '-')
	{
		cout<<n1<<"-"<<n2<<"="<<n1-n2;
	}
	else if(op == '*')
	{
		cout<<n1<<"*"<<n2<<"="<<n1*n2;
	}
	else if(op == '/')
	{
		cout<<n1<<"/"<<n2<<"="<<n1/n2;
	}
	else
	{
		cout<<"Invalid operater";	
	}
	
	
	
	getche();
}