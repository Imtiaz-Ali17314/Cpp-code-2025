#include <iostream.h>
#include <conio.h>
main()
{
	char ch ;
	
	cout<<"Enter a character to check whether it is capital later , samll later , digit or any other symbol.";
	ch = getche(); cout<<endl;
	
	if (ch >= 'A' && ch <= 'Z')
	{
		cout<<"The character '"<<ch<<"' is a capital later."<<endl;
		
	}
	else if (ch >= 'a' && ch <= 'z' )
	{
		cout<<"The character '"<<ch<<"' is a samll later."<<endl;
	}
	else if (ch >= '0' && ch <= '9')
	{
		cout<<"The character '"<<ch<<"' is a digit."<<endl;
	}
	else
	{
		cout<<"The character '"<<ch<<"' is any other symbol."<<endl;
	}
	
	getche();
}