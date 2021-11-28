#include<iostream>
using namespace std;
void search(int *x, int *y);
int main()
{
    int a[5], n, i;
    int *pa, *pn;
    pa = &a[0], pn = &n;

    cout<<"Enter Array Element\n";
    for (i=0;i<5;i++)
    {
        cin>>pa[i];
    }

    cout<<"Enter the element to search";
    cin>>*pn;

    search(&a[0],pn);

    return 0;
}

void search (int *x, int *y)
{
    int i, f=0;

    for (i=0;i<5;i++)
    {
        if ( *(x+i) == *y)
        {
            f=1;
            break;
        }
        else
            continue;
    }

    if (f==1)
        cout<<"found\n";

    else
        cout<<"Not Found";
}