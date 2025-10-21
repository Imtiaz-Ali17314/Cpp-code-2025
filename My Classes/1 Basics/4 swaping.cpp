#include <iostream.h>
#include <conio.h>

  main()
{
  int a,b,c;
  
  cout<<"Enter a value of a: ";
  cin>>a;
  
  cout<<"Enter a value of b: ";
  cin>>b;
  c=a;
  a=b;
  b=c;

 
 cout<<"After swaping \n";
 cout<<"The value of a=  "<<a<<endl;
 cout<<"The value of b=  "<<b<<endl;

 
 getch();
}
