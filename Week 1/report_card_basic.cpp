/*9.	Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40%   : Grade F*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int ph,ch,bio,math,com,total;
    float percent;
    cout<<"*****************************Start entering your marks subject wise to know your result******************************"<<endl;
    cout<<"Enter the marks obtained in Physics: ";
    cin>>ph;
    cout<<"Enter the marks obtained in Chemistry: ";
    cin>>ch;
    cout<<"Enter the marks obtained in Biology: ";
    cin>>bio;
    cout<<"Enter the marks obtained in Mathematics: ";
    cin>>math;
    cout<<"Enter the marks obtained in Computer: ";
    cin>>com;

    total=ph+ch+bio+math+com;

    cout<<"Your total marks is "<<total<<endl;

    percent=(total*100)/500;

    cout<<percent<<"%";

    if(percent>=90)
    {
        cout<<"Grade A";
    }
    else if(percent>=80&&percent<90)
    {
        cout<<"Grade B";
    }
    else if(percent>=70&&percent<80)
    {
        cout<<"Grade C";
    }
    else if(percent>=60&&percent<70)
    {
        cout<<"Grade D";
    }
    else if(percent>=40&&percent<60)
    {
        cout<<"Grade E";
    }
    else if(percent<40)
    {
        cout<<"Grade F* (Fail)";
    }

        getch();
    return 0;





}

