#include<iostream.h>
#include<conio.h>
main()
{
	int i , a, c ;
	
	
	cout<<"Enter a number : ";
	cin>>i;
	
	a=1;
	c=1;
		
	while(a<=i)
	{
		c*=a;
		a++;
	
	}
	cout<<"Factorial of "<<i<<" is "<<c<<endl;
	
	getche();
}