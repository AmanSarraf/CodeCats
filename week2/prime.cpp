
//1.	Write a C program to determine whether a given number is prime or not.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number";

    cin>>n;
    for(i=2;i<n;i++)
        if(n%i==0)
        break;
    if(i==n)
        cout<<"prime";
    else
        cout<<"Not prime";
}
