#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,q;
	char a[50];
	printf("hello\nenter string=");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='p' && a[i+1]=='i')
		{
			printf("3.14");
			i+=2;
		}
		if(a[i]=='\0')
		{
			break;
		}
		printf("%c",a[i]);
	}
	getch();
}
