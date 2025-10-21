#include<iostream.h>
#include<conio.h>
main()
{
	int n , digit , sum ;
	
	cout<<"Enter n: ";
	cin>>n;
	
	sum = 0;	
	while(n>0)
	{
		digit = n % 10;
		sum += digit;
		
		
		
		n/=10;
	}
	cout<<sum;
	
	getche();
}