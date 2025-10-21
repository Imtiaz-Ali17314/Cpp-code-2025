#include<iostream.h>
#include<conio.h>
main()
{
	int hours,minets,second,total_second;
	
	
	cout<<"enter a hours ";
	cin>>hours;
	
	cout<<"enter a minutes ";
	cin>>minets;
	
	cout<<"enter a seconds ";
	cin>>second;
	
	hours=hours*3600;
	minets=minets*60;
	
	total_second=hours+minets+second;
	cout<<"The total second is "<<total_second;
	
	getch();
}