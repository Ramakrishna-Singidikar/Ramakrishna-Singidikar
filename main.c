#include<stdio.h>
#include"header.h"
int main()
{
int a,b,c;
printf("Enter any value A = ");
scanf("%d",&a);
printf("Enter any value B = ");
scanf("%d",&b);
printf("A+B = %d",add(a,b));
printf("\nA-B = %d",sub(a,b));
printf("\nAxB = %d",mul(a,b));
printf("\nA/B = %d\n",div(a,b));
}
