#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	char ch ;
	int vowels , consonant , digits , symbols;
	
	vowels = 0;
	consonant = 0;
	digits = 0;
	symbols = 0;
	
	
	do
	{
		ch = getche(); 
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'O' )
		{
			vowels++;
		}
		else if (ch >= 'A' && ch <= 'Z'  || ch >= 'a' && ch <= 'z' )
		{
			consonant++;	
		}
		else if (ch >= '0' && ch <= '9')
		{
			digits++;
		}
		else
		{
			symbols++;
		}
		
		
	}
	while(ch!='.');
	
	cout<<endl;
	cout<<"The total vowels in the sentance are: "<<vowels<<endl;
	cout<<"The total consonant in the sentance are: "<<consonant<<endl;
	cout<<"The total digits in the sentance are: "<<digits<<endl;
	cout<<"The total symbols in the sentance are: "<<symbols;
	
	
	getche();
}