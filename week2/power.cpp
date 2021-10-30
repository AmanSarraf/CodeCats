//6.	C program to find power of a number using for loop.

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c=1,i;

    cout<<"Enter a number";
    cin>>a;
    cout<<"Enter the exponent";

    cin>>b;
    for(i=1;i<=b;i++)
    {
        c=c*a;
    }
    cout<<" "<<a<<"^"<<b<<"="<<c;


    getch();
    return 0;

}
