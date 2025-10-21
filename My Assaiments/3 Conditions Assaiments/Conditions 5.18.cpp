#include<iostream.h>
#include<conio.h>
main()
{
	int a,b,c;
	
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	{
		cout<<"The maximum number is: "<<a;
	}
	else if (b>a && b>c)
	{
		cout<<"The smallest number is: "<<b;
	
	}
	else
	{
		cout<<"The smallest number is: "<<c;
	}

	getch();
}