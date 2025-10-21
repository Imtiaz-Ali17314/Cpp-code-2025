#include <iostream.h>
#include <conio.h>

main()
{
	int amount , nNotes , note ; 
	
	cout<<"Enter your amount: ";
	cin>>amount;
	
	note = 5000;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 1000;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 500;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 100;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 50;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 20;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 10;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 5;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 2;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	note = 1;
	nNotes = amount / note;
	cout<<note<<"*"<<nNotes<<"= "<<note*nNotes<<endl;
	
	amount = amount%note;
	
	
	getch(); //Function
}