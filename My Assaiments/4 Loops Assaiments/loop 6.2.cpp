#include<iostream.h>
#include<conio.h>
main()
{
	int i, sum;
	
	i=1; 	
	sum=0;
	
	while(i<=5)		
	{
		cout<<i<<endl; 
		sum+=i;
		
		i++;	
	}	
	
	cout<<"Sum ="<<sum<<endl;
	getche();
}