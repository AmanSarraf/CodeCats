/*10.	Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int salary,total,gross;
    cout<<"Enter your salary Amount";
    cin>>salary;
    if(salary<=10000)
    {
        gross=salary+((salary*20)/100)+((salary*80)/100);
        cout<<gross;

    }

    else if(salary<=20000)
    {
        gross=salary+((salary*25)/100)+((salary*90)/100);
        cout<<gross;

    }
     else if(salary>20000)
    {
        gross=salary+((salary*30)/100)+((salary*95)/100);
        cout<<gross;

    }

    getch();
    return 0;


}
