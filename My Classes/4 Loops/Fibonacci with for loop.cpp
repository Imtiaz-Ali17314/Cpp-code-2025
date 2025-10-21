#include<iostream.h>
#include<conio.h>
main()
{
	int n , a, b , i , sum ;
	
	
	cout<<"Enter a number : ";
	cin>>n ;
	
	a=0;
	b=1;
	
	cout<<a<<" "<<b<<" ";
	
	sum=0;
	for(i=3; i<=n; i++)
	{
		sum = a+b;
		cout<<sum<<" ";
		
		a=b;
		b=sum;
		
	}
	
	
	getche();
}