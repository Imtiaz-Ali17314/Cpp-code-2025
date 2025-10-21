#include<iostream.h>
#include<conio.h>
main()
{
	
	int year,months,days,total;
	
	cout<<"Enter your year  ";
	cin>>year;
		
	cout<<"Enter your months  ";
	cin>>months;
	cout<<"Enter your months  ";
	cin>>days;
	
	year=year*360;
	months=months*30;	
	total=year+months+days;
	
		cout<<"The total age in days "<<" "<<total<<endl;
	
}