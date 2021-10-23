//4.	Write a C program to check whether a year is a leap year or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){

int year;
cout<<"Enter a year to check leap or not";
cin>>year;
if(year%4==0){
    cout<<year<<" is a leap Year";

}
else
{
    cout<<year<<"is a non leap year";

}
 getch();
 return 0;

}
