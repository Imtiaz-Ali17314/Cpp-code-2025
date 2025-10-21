#include<iostream.h>
#include<conio.h>
main()
{
	int i, table;
	
	cout<<"Enter a number to get its table: ";
	cin>>table;
	
	i=1; 	

	while(i<=10)		
	{
		cout<<table<<"*"<<i<<"="<<table*i<<endl; 
	
		
		i++;	
	}	
	

	getche();
}