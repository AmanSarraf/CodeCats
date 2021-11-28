#include<iostream>
int avg(int*);
int main()
{

int arr[]={1,2,4,7,3,8},A;
A=avg(arr);

std::cout<<"The Average of element of array is "<<A;
return 0;


}

int avg(int a[])
{
 int i,sum=0;
 //for(n=0;a[n];n++);
 for(i=0;i<6;i++)
 {
     sum=sum+a[i];
 }
 return (sum/6);

 

}