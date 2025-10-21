#include<iostream.h>
#include<conio.h>
main()
{
	float n , i  ;
	
	n = 2.0;
	i = 1.0;
		
	while(n<=100)
	{
		i=i + 1.0 / n;
		
		n+=2;
	}
	cout<<"Result is "<<i;
	
	getche();
}