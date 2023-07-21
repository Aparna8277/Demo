//Program to illustrate the logical operators
#include<stdio.h>
int main()
{
 int a=7,b=9;
 if(a&&b)
 printf("Both are non zero\n");
 if(a<b||a++)
 printf("%d\n",a);
 if(a<b&&b--)
 {
 printf("%d\n",b);
 printf("%d\n",(a+b && !b));
 }
 return 0;
}
