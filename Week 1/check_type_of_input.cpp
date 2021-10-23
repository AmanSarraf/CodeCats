//5.	Write a C program to input any character and check whether it is alphabet, digit or special character.

#include<iostream>
#include<conio.h>

using namespace std;
int main(){

   char ch;

   cout<<"Enter a value";
   cin>>ch;

   if(ch>='A'&&ch<='Z')
   {
       cout<<ch<<" is an uppercase letter";

   }
   else if(ch>='0'&&ch<='9')
   {

       cout<<ch<<" is a digit";
   }
   else
   {
       cout<<"Special Charecter";

   }

   getch();
   return 0;


}
