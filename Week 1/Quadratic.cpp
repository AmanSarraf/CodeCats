//8.	Write a C program to find all roots of a quadratic equation.

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,r1,r2,d;
   cout<<"Enter the coefficient of X^2";
   cin>>a;
   cout<<"Enter the coefficient of X";
   cin>>b;
   cout<<"Enter the constant term";
   cin>>c;

   d=(b*b)-4*(a*c);

   if(d>0)
   {
       cout<<"Discriminant is"<<d<<" Roots are real and distinct";

   }
   else if(d==0)
   {
       cout<<"Discriminant is 0 and roots are real and equal";
   }
   else
   {
       cout<<"roots imaginary";

   }

    r1=((b*b)+sqrt(d))/(2*a);
    r1=((b*b)-sqrt(d))/(2*a);

    cout<<"And roots are :: "<<r1<<" and "<<r2;

    getch();
    return 0;




}

