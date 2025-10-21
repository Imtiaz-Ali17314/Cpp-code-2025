#include <iostream.h>
#include <conio.h>
main()
{
	char ch ;
	
	cout<<"Enter a character to check whether it is vowel or not.";
	ch = getche(); cout<<endl;
	
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'O' )
	{
		cout<<"You entered a vowel: "<<ch;
		
	}
	else
	{
		cout<<"You not entered a vowel: "<<ch;
	}
	
	getche();
}