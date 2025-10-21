#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int r,i;

	srand(time(0));
	
	for(i=1; i<=100; i++)
	{
		r=rand()%900+100;
		cout<<r<<" ";
	}
	
	getche();
}