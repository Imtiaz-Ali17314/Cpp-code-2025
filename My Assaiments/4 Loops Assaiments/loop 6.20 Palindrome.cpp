#include<iostream.h>
#include<conio.h>
main()
{
	int n , digit , rev ,num;
	
	
	cout<<"Enter a number : ";
	cin>>n;
	
	rev=0;
	num = n;
	while(n > 0)
	{
		digit = n%10;
		rev = (rev*10) + digit;
		
		n = n/10;
	}
	
	cout<<"The reverse of the number is: "<<rev<<endl;
		
	if(num == rev)
	{
		cout<<"The number is a Palindrome";
	}
	else
	{
		cout<<"The number is not a Palindrome";
	}
	
	getche();
}