#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,n,sqr;
	bool isPrime;
	
	cout<<"Enter a number get its factors: ";
	cin>>n;
	
	sqr = sqrt(n);
	isPrime = true;
	for(i=2; i<=sqr; i++)
	{
		
		if(n%i == 0)
		{
			isPrime=false;
			break;
		}	
	}
	
	if(isPrime)
	{
		cout<<"Prime";
	}
	else
	{
		cout<<"Composite";
	}
	getche();
}