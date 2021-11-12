//Create a start pattern using nested loop
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    getch();
    return 0;


}
