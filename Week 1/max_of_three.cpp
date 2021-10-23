//program for finding max of three numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;

    if(a>b&&a>c)
    {
     cout<<a<<" is greatest";
    }
    else if(b>c&&b>a){
      cout<<b<<" is greatest";

    }
    else if(c>b&&c>a){

        cout<<c<<" is greatest";

    }

    getch();
    return 0;




}
