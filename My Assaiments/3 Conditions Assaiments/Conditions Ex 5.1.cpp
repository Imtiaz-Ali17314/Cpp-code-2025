#include <iostream.h>
#include <conio.h>
main()
{
	char ch ;
	
	cout<<"Enter a character to check whether it is lower case later or not: ";
	ch = getche(); cout<<endl;
	
	if (ch >= 'a' && ch <= 'z' )
	{
		cout<<"The character '"<<ch<<"' is a lower case later."<<endl;
	}
	else
	{
		cout<<"The character '"<<ch<<"' is not a lower case later."<<endl;
	}
	
	getche();
}