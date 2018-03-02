#include<stdio.h>
void main()
{
int temp,i;

printf("enter the number");
scanf("%d",&i);

temp=i;


while(1)
{

printf("%d",temp%10);
temp=temp/10;
if(temp%10!=temp)
{
printf("%d",temp%10);
temp=temp/10;

break;}


}











}

