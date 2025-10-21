#include <iostream.h>
#include <conio.h>
main()
{
	float marks;
	bool is_employee_son , is_disabled ;
	
	cout<<"Please enter your marks\t" ;
	cin>>marks;
	cout<<"Enter 1 for employee son or 0 for not\t";
	cin>>is_employee_son;
	cout<<"Enter 1 for disabled or 0 for not\t";
	cin>>is_disabled;
	
	
	if ( (is_disabled && marks>=60) || (is_employee_son && marks>=70) || (marks>=80) )
	{
		cout<<"Admission Granted";
	}
	else
	{
		cout<<"Admission not Granted";
	}
	
	
	getch();
}