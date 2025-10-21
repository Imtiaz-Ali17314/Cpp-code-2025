#include <iostream.h>
#include <conio.h>

int main() {
	char convert , small , large ;
	
	cout<<"Enter a small letter to convert in large: ";
	cin>>small;
	
	convert = small-32;
	
	cout<<"\nThe converted latter is: "<<convert;
	
	
	cout<<"\n\nEnter a large letter to convert in small: ";
	cin>>large;
	
	convert = large+32;
	
	cout<<"\nThe converted latter is: "<<convert<<endl;

    getch();
}
