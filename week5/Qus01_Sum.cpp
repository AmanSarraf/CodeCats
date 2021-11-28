#include<iostream>
using namespace std;
int sum(int*,int*);
int main()
{

    int a=10, b=20;
    cout<<"The result is "<<sum(&a,&b);
    return 0;
}

int sum(int *x,int *y)
{

return (*x + *y);

}