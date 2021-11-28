//
//Reverse the input Array
#include<iostream>
#include<conio.h>
using namespace std;
void reverse(int arr[]);
int main()
{
    int arr[5]={1,2,3,4,5};

reverse(arr);


return 0;



}
void reverse(int arr[])
{
    int i;
    for(i=4;i>=0;i--)
    {
        cout<<" "<<arr[i];
    }

}
