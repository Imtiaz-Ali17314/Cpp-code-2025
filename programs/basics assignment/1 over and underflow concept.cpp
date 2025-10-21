#include<iostream.h>
#include<conio.h>
main()
{
	
    //shorts datatype=-32768 to 32767 
    
	short max_value,min_value;
	
	max_value=32767;
	min_value=-32768;
	
	//concept of overflow  
	cout<<max_value<<endl;
	max_value=max_value+1;
	cout<<max_value<<endl;
	cout<<endl;
	
	//concept of underflow  
	cout<<min_value<<endl;
	min_value=-32768-1;
	cout<<min_value<<endl;
	
	
	
	
	
	
	
}
