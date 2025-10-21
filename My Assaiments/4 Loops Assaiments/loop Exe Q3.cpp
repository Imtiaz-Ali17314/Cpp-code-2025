#include<iostream.h>
#include<conio.h>
main()
{
	int i, sum;
	
	i=0;
	
	do
	{
		cout<<1<<"/"<<i<<" + ";
		
		i+=4;
		
		sum+=1/i;
	}
	while(i<=100);
	
	cout<<" = "<<sum;
	
	getche();
}