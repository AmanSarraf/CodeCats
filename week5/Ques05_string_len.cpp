#include<iostream>
int strl(char*);
int main()
{

char c[]="Aman Sarraf";

int l = strl(c);
std::cout<<"The Length of the String is "<<l;
return 0;


}

int strl(char *s)
{
 int n;
 for(n=0;s[n];n++);
 return n;

}