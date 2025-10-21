#include<iostream.h>
#include<conio.h>
main()
{
	int i, sum;
	
	sum = 1;
	cout<<"----------\nnum    sum \n----------"<<endl;
	i=1; 
	while(i<=5)
	{
		
		cout<<i<<"      "<<sum<<endl;
		
		i++;
		sum +=i;
	}

	
	getche();
}