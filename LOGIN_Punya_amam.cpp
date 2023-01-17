#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include "Identitas.h"
  main()
  {
 char nem[100],pass[100],tum;
 int p;
 ulang:
 Identitas("Identitas");
 cout<<"	 LOGIN"<<endl;
 cout<<"USERNAME  :";gets(nem);
 cout<<"PASSWORD  :";
 for(p=0;p<=100;p++)
 {
  tum = getch();
  if(tum == '\r')
  {
    p = 100;
  }
   else if(tum == '\b')
   {        cout<<"\b \b";
            p = p - 2;
   }
  else
   {
   pass[p] = tum;
   cout<<"*";
   }
 }
 cout<<endl;
 if((strcmp(nem,"ADMIN") == 0) && (strcmp(pass,"1234567") == 0))
 {
   cout<<nem<<" ENGGES LOGIN"<<endl;
 }
 else
   {
     cout<<nem<<" TEU BISA LOGIN"<<endl;
     getch();
     clrscr();
     goto ulang;
   }
 getch();
}
