#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,q;
	char a[50],c1,c2;
	printf("hello\nenter string=");
	gets(a);
	printf("enter c1=");
	scanf("%c",&c1);
	fflush(stdin);
	printf("enter c2=");
	scanf("%c",&c2);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==c1)
		{
			printf("%c",c2);
		}
		else
		{
			printf("%c",a[i]);
		}
	}
	getch();
}
