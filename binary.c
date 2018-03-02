#include<stdio.h>
void main()
{
int a;

printf("enter the value of a");
scanf("%d",&a);

	while (a>0)
	{
		printf("%d",a%2);
		a=a/2;
	}
}			

