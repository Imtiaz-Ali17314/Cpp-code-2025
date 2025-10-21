#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int r, guess , countGuess;

	srand(time(0));
	r= rand()%900 + 100;
	
	countGuess = 0;
	
	do
	{
		cout<<"Enter your guess between 100 and 999: ";
		cin>>guess;
		countGuess++;
		
		if(guess == r)
		{
			cout<<"Your guess is correct. My guess was "<<guess<<endl;
			break;
		}
		else if(guess<r)
		{
			cout<<"Your guess is smaller than my number "<<endl;
		}
		else
		{
			cout<<"Your guess is bigger than my number "<<endl;	
		}
		
		cout<<endl<<endl;	
	}
	while(true);
	
	cout<<"\nYour total tries are: "<<countGuess;
	
	getche();
}