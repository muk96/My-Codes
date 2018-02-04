//References
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{ int x=10;
  int &ref=x; //Declaring a reference
  cout<<"x is: "<<x<<endl;
  ref=20;
  cout<<"Now x is: "<<ref<<endl; // A reference is an alternative name to a variable
  x=30;
  cout<<"Value of ref is: "<<x<<endl;
  return 0;
  }
