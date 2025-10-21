#include<iostream.h>
#include<conio.h>
main()
{
	int i , j , size;
	
	cout<<"Enter a size of loop: ";
	cin>>size;
	
	i=1; 	

	while(i<=size)				// outer loop
	{
		cout<<i<<": ";
		j=1;
		
		while(j<=size)				//  Inner loop	
		{
			cout<<i<<" "<<j<<"\t"; 
		
			j++;	
		}
		
		cout<<endl;
		
		i++;
			
	}	
	
	
	getche();
}