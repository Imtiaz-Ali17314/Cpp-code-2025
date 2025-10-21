#include<iostream.h>
#include<conio.h>
main()
{
	int i,n ,sum;
	
	cout<<"Enter a number: ";
	cin>>n;
	
	sum=0;
	for(i=1; i<=n; i++)
	{
		sum += (i*i);
		
	}
	
	cout<<sum;
	
	getche();
}