#include<stdio.h>
int count (char *);
void main()
{
int c=0;
char* s[]={"we will  teach you how to","move a mountain","Level a building","Erase the past","Make a mililon"};
for (int i=0;i<5;i++)
c+=count(s[i]);
printf("%d",c);
}
int count( char*p)
{
int  c=0;
	for(int i=0;p[i]!='\0';i++)
	{
		if(p[i]=='e')
		c++;
	}	

return c;
}

