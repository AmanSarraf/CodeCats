#include<iostream>
void strl(char*);

void swap(char *x,char *y)
{

char tem;
tem=*x;
*x=*y;
*y=tem;

}
int main()
{

char c[]="AmanSarraf";
//std::cout<<"the reverse is "<<c;
strl(c);

std::cout<<"the reverse is "<<c;
return 0;


}

void strl(char *s)
{
 int n;
 for(n=0;s[n];n++);
 for(int i=0;i<n/2;i++)
 {
     swap(s+i , s+n-i-1);
     
 }


}