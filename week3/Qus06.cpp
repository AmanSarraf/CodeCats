//Count Total Number of occurrences of a given element in an array.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[100],n,i,count=0;
    cout<<"Enter the number of elemets of array "<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(i=0;i<n;i++)
    {

      cin>>arr[i];


    }
    int num;
    cout<<"Enter the element whose occurence you want to check"<<endl;
    cin>>num;

    for(i=0;i<n;i++)
    {

      if(arr[i]==num)
      count++;
      else
        continue;


    }

    cout<<"The occurence of "<<num<<" is"<<count<<" times";


}
