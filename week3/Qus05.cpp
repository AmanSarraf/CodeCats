//5. Write a program in C to find the sum of all elements of the array.
//[Addon] Find Sum of Even and Odd numbers present in array & Sum of Odd and Even Position Elements of an array.
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[100],odd[100],even[100],n,i,sum=0,esum=0,osum=0;


    cout<<"Enter the number of elements for array";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }

    cout<<"The entered elements are";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];

    }
      cout<<""<<endl;
    cout<<"Sum of the elements of array is"<<endl;

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];

    }

    cout<<" "<<sum<<endl;

    cout<<"The even elements are"<<endl;

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
        else
            continue;

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        esum=esum+arr[i];

    }
    cout<<"The sum of the even elements is "<<esum<<endl;


    cout<<"The Odd elements of the array is "<<endl;

    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        cout<<arr[i]<<" ";
        else
            continue;

    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        osum=osum+arr[i];
        else
            continue;

    }

    cout<<"The sum of the odd elements is"<<osum<<endl;

    cout<<"The elements at the even positions are"<<endl;

    for(i=0;i<n;i=i+2)
    {
        cout<<arr[i];

    }

    cout<<"The elements at the Odd positions are"<<endl;

    for(i=1;i<n;i=i+2)
    {
        cout<<arr[i];

    }

    getch();
    return 0;

}
