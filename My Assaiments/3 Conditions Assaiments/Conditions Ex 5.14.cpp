#include <iostream.h>
#include <conio.h>

main() {
	
	int salary;
	float inctax , netSalary;
	
	cout<<"Enter your salary: ";
	cin>>salary;
	
	if (salary > 30000)
	{
		netSalary = salary - (salary*20.0/100.0);
		inctax = salary - netSalary;
	}	
	else if (salary >= 20000)
	{
		netSalary = salary - (salary*15.0/100.0);
		inctax = salary - netSalary;
	}	
	else
	{
		netSalary = salary - (salary*10.0/100.0);
		inctax = salary - netSalary;
	}
	

	cout<<"Salary= "<<salary<<"\tNet salary: "<<netSalary<<"\tIncome tax: "<<inctax<<endl;

	
	
	
	
	getch();
}
