#include<iostream.h>
#include<conio.h>
main()
{
	int n1 ,n2 , d;
	
	cout<<"Enter the first number: ";
	cin>>n1;
	
	cout<<"Enter the second number: ";
	cin>>n2;
	
	if(n1<n2)
	{
		d=n2;
	}
	else
	{
		d=n1;
	}
	
	for(; d>=1; d--)
	{
		if(n1%d == 0 & n2%d == 0)
		{
			break;
		}
	}
	
	cout<<"The greatest common divisor of "<<n1<<" and "<<n2<<" is "<<d;
	
	getche();
}