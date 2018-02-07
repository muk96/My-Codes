#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>  //for using namespace specify header files as cstring , cstdio 
using namespace std;
struct custom
{ char name[21];
  int ac_no;
  int balance;
  };
 int main()
 { system("cls");
   custom c[3]; // c[3] indicates that there are 3 customers whose data is to be stored.
   for(int i=0; i<3; i++)
   { cout<<"Enter data for customer: "<<i+1<<endl;
     cout<<"Enter name: ";
     cin>>c[i].name; // We are experiencing a problem here. Maybe we should use cin.getline()
     cout<"Enter account no. : ";
     cin>>c[i].ac_no;
     cout<<"Enter balance : ";
     cin>>c[i].balance;
     }
   return 0;
     }
     
     
  
