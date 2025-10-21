#include<iostream.h>
#include<conio.h>
main()
{
	
	int hours,minets,second,rest_of_second;
	
	cout<<"Enter a seconds _";
	cin>>second;//7400
	
	hours=second/3600;//2 
	
	rest_of_second=second%3600;//200    //	minets=(second/60)%60;
	
	minets=rest_of_second/60;//3 

	
	second=rest_of_second%60;//20 
	
	
		cout<<"The total hours is "<<hours<<":"<<minets<<":"<<second<<endl;
	getch();
}