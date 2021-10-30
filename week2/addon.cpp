
//Write a program in C to find the prime numbers within a range of numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,i,j,f;
    cout<<"Enter a number range";

    cin>>a;
    cin>>b;
    for(i=a+1;i<=b-1;i++)
    {
        for(j=2;j<i-1;j++)
        {
            if(i%j==0)
                break;
            if(j==i)
                cout<<" "<<i;


        }




    }

}
