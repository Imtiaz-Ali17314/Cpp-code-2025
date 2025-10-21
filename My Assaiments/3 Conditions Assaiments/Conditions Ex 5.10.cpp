#include <iostream.h>
#include <conio.h>

main() {
	
	int marks;
	float perc;
	
	cout<<"Enter a temperature: ";
	cin>>marks;
	
	perc = marks * 100.0 / 1100.0;
	
	if (perc > 100 || perc < 0)
	{
		cout<<"Invalid marks";	
	}
	
	else if (perc >= 80)
	{
		cout<<"A+";
	}
	
	else if (perc >= 70)
	{
		cout<<"A";
	}
	
	else if (perc >= 60)
	{
		cout<<"B";
	}
	
	else if (perc >= 50)
	{
		cout<<"C";
	}
	
	else if (perc >= 40)
	{
		cout<<"D";
	}
	
	else if (perc >= 33)
	{
		cout<<"E";
	}
	else
	{
		cout<<"F";
	}
	

	
	
	
	
	getch();
}
