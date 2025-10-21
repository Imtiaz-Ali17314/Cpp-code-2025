#include <iostream.h>
#include <conio.h>

main() {
	
	int temp;
	
	cout<<"Enter a temperature: ";
	cin>>temp;
	
	if (temp > 35)
	{
		cout<<"Hot day";
	}
	else if (temp >= 25) 
	{
		
		cout<<"Pleasant day";
		
	}
	else
	{
		cout<<"Cool day";
	}
	
	
	
	
	getch();
}
