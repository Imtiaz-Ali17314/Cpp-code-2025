#include<iostream.h>
#include<conio.h>
main()
{
	int startingDay , space , tab, date , nDay ;
	
	
	cout<<"Enter a number of starting day : ";
	cin>>startingDay ;
	
	cout<<"Mon\tTue\tWen\tThu\tFri\tSat\tSun "<<endl;
	
	space = startingDay-1;
	for(tab=1; tab<=space; tab++)
	{
		cout<<"\t";
	}
	
	for(date=1; date<=30; date++)
	{
		cout<<date<<"\t";
		nDay = space + date ; 
		
		if(nDay % 7 == 0)
		{
			cout<<endl;
		}
	}
	
	getche();
}