#include<iostream>
using namespace std;
void swap (int*,int*);
int main()
{
int a=10, b=30;
cout<<"The value of A="<<a<<"\nThe  value of B="<<b;
swap(&a,&b);
cout<<"\nThe new value of A="<<a<<"\nThe new value of B="<<b;
 return 0;

}

void swap(int *x,int *y)
{

int tem;
tem=*x;
*x=*y;
*y=tem;

}