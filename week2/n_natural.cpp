
// Program to print N natural number and there sum
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;

    cout<<"Enter the value of N";
    cin>>n;
    for(i=1;i<=n;i++){

        cout<<""<<i<<endl;

        sum=sum+i;



    }
    //cout<<"Sum of"<<n<<" natural no. is "<<sum;
    cout<<"Sum of "<<n<<"Natural no. using Formula is "<<(n*(n+1))/2;
    getch();
     return 0;






}
