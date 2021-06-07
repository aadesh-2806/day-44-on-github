#include<stdio.h>

void main()
{
	int l,i;
	char b[100],a[100];
	
	printf("hello\nenter string=");
		
	gets(a);
	
	i=0;
	while(a[i]!=0)
	{
		i++;
	}
	i=i-1;
	l=0;
	while(i>=0)
	{
		b[l]=a[i];
		l++;
		i--;
	}
	b[l]='\0';
	
	
	puts(b);
	getch();
	
}
