#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum=0;
clrscr();
printf("\n Enter the number:");
scanf("%d",&a);
if(a>0)
{
b=a%10;
c=b*b*b*b;
sum+=c;
a/=10;
}
printf("\n %d",sum);
getch();
}
