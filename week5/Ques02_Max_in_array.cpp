#include<iostream>
int max(int*);
int main()
{

int arr[]={1,2,4,7,3,8},large;
large=max(arr);

std::cout<<"The largest element of array is "<<large;
return 0;


}

int max (int a[])
{
 int i,large=a[0],n;
 //for(n=0;a[n];n++);
 for(i=0;i<6;i++)
 {
     if(a[i]>large)
     large=a[i];
     else
     continue;
 }
 return large;

 

}