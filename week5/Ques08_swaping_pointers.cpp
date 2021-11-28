#include<iostream>

using namespace std;

void swapP(int **a, int **b) {
    int *temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;

    cout<<"Enter two numbers\n";
    cin>>a>>b;

    cout<<"Before Swap"<<*p1<<" "<<*p2;
    swapP(&p1, &p2);;
    cout<<"After Swap"<<*p1<<" "<<*p2;

    return 0;
}