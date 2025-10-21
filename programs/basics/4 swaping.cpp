#include <iostream.h>
#include <conio.h>

  main()
{
  int x,y,t;
  
  cout<<"enter a x:";
  cin>>x;
  
  cout<<"enter a y:";
  cin>>y;
  t=x;
  x=y;
  y=t;

 
 cout<<"after swifing \n\n";
 cout<<"the value of x  "<<x<<endl;
 cout<<"the value of y  "<<y<<endl;

 
 getch();
}
