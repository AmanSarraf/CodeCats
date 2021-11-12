//Create a start pattern using nested loop
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,k;

    for(i=1;i<=9;i++)
    {

        for(j=1;j<=9;j++)
        {
            if(i<=5&&j==i||j==10-i)
            {
                cout<<"*";

            }
            else if(i>5&&j==10-i||j==i)
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



