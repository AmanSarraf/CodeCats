//Count Frequency of every element of the array
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr [100],n,i,count=0;
    cout<<" Enter no. of elements ";
    cin>>n;
    for(i=0;i<n;i++)
    {

        cin>>arr[i];

    }

    for(int j=0;j<n;j++)
    {


     for(i=0;i<n;i++)
    {

        if(arr[i]==arr[j])
            count++;


    }
    cout<<"The frequency of "<<arr[j]<<" is "<<count<<endl;

    count=0;
    }
 return 0;
}
