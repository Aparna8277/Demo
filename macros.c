#include<stdio.h>
#define hello(name) printf("Hello %s\n",name)
int main()
{
  char name[10];
  printf("Enter your name:\n");
  scanf("%s",name);
  hello(name);
  return 0;
 }
