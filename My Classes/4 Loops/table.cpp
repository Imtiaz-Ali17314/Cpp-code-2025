#include<iostream.h>
#include<conio.h>
main()
{
	int size ,i ;
	
	cout<<"Enter size: ";
	cin>>size;
	
	i=1;
	
	while(i<=size)
	{
		cout<<"-";
		if(i % 4 == 0)
		{
			cout<<"X";
		}
		i++;
	}
	
	
	getche();
}