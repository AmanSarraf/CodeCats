//Create a start pattern using nested loop
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {

        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
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


