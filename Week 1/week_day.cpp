//6.	Write a C program to input week number and print week day.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n;

    cout<<"Enter week no.";
    cin>>n;

    switch(n)
    {
        case 1: cout<<"Monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"Wednesday"; break;
        case 4: cout<<"Thursday"; break;
        case 5: cout<<"Friday"; break;
        case 6: cout<<"Saturday"; break;
        case 7: cout<<"Sunday"; break;
    }
    if(n>7){
        cout<<"Invalid Input :: please enter between 1-7 only";
    }
    getch();
    return 0;
}
