

// transpose of a matrix
#include <bits/stdc++.h>
using namespace std;

 

void transpose(int A[3][3], int B[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            B[i][j] = A[j][i];
}
 

int main()
{
    int A[3][3] = { {1, 1, 1, },
                    {2, 2, 2, },
                    {3, 3, 3, },
                    };
 
    int B[3][3], i, j;
 
    transpose(A, B);
 
    cout <<"Result matrix is \n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
           cout <<" "<< B[i][j];
        cout <<"\n";
    }
 
    return 0;
}