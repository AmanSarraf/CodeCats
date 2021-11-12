//C Program to Find Largest and Smallest Element in Array
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[100],i,large=0,small,n;
    cout<<"Enter the number of the array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {

        if(arr[i]>large)
            large=arr[i];
         else
            continue;

    }
    cout<<"The largest value of array is "<<large;
    small=large;

    for(i=0;i<n;i++)
    {

        if(small>arr[i])
            small=arr[i];
         else
            continue;

    }
    cout<<"The samllest value of array is "<<small;




}
