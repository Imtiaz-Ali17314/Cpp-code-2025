#include<iostream.h>
#include<conio.h>
main()
{
	int n , oddSum , evenSum ;
	
	
	cout<<"Enter a positive no. : ";
	cin>>n;
	
	evenSum = 0;
	oddSum = 0;
		
	while(n>=0)
	{
		if(n%2 == 0)
		{
			evenSum+=n;
		}
		else
		{
			oddSum+=n;
		}
		n--;
	
	}
	cout<<"Sum of even digits is= "<<evenSum<<endl;
	cout<<"Sum of even digits is= "<<oddSum<<endl;
	
	getche();
}