#include<iostream>
int min(int*);
int main()
{

int arr[]={1,2,4,7,3,8},small;
small=min(arr);

std::cout<<"The smallest element of array is "<<small;
return 0;


}

int min (int a[])
{
 int i,small=a[0],n;
 //for(n=0;a[n];n++);
 for(i=0;i<6;i++)
 {
     if(small>a[i])
     small=a[i];
     else
     continue;
 }
 return small;

 

}