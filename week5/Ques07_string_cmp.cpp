#include<iostream>
int comp(char*,char*);
using namespace std;
int main()
{

 char x[]="Aman";
 char y[]="Sarraf";
 int f = comp(x,y);
 if(f==1)
 cout<<"Equal";
 else
 cout<<"Not equal";
 return 0;


}
int comp(char *p, char *q)
{
 int n,n2,i,j;
 for(n=0;p[n];n++);
 for(n2=0;q[n2];n2++);
 for(i=0 , j=0;i<n&&j<n2;i++&&j++)
 {
     if((p+i)==(q+j))
     return 1;
     else
     return 0;
     
 }


}