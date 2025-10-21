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
	i=3;
	while(i <= n)
	{
		sum = a+b;
		cout<<sum<<" ";
		
		a=b;
		b=sum;
		
		i++;
	}
	
	
	getche();
}