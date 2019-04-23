#include<stdio.h>
int bug_fun()
{
int i;
int *p;
p=NULL;
*p=5;
}
int main()
{
int a,b,c;
a=10;
b=5;
c=a*b;
printf("multiple value %d\n",c);
b=0;
c=c/b;
printf("div value is %d\n",c);
}
