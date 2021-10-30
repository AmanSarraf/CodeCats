
//5.	Write a program in C to display the number in reverse order
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,rem;

    cout<<"Enter a number";
    cin>>n;
    while(n>0)
    {
       rem=n%10;
       cout<<rem;
       n=n/10;

    }

    getch();
    return 0;

}
