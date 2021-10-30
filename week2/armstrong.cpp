// program to check a number is armstrong or not1#include<
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=0,rem,n,c;
    cout<<"Enter a number to check whether the number is armstrong or not";
    cin>>n;
    c=n;

    while(n>0)
    {
        rem=n%10;

        a=a+(rem*rem*rem);

        n=n/10;

    }

        if(a==c)
    {
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }

  getch();
  return 0;


}
